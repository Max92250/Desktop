
import React, { useRef, useEffect, useState } from 'react';
import mapboxgl from '!mapbox-gl'; // eslint-disable-line import/no-webpack-loader-syntax
 import  "./Rai.css"
mapboxgl.accessToken = 'pk.eyJ1IjoibWF4Y2hhbWxpbmciLCJhIjoiY2tzOHV1bnZiMHhtNTJybXRseDJyMXhvYyJ9.enhQpMcNt2C_jFCnoYPCkQ';
export const Sycomponent = () => {

  const mapContainer = useRef(null);
const map = useRef(null);
const [lng, setLng] = useState(-70.9);
const [lat, setLat] = useState(42.35);
const [zoom, setZoom] = useState(9);

useEffect(() => {
  if (map.current) return; // initialize map only once
  map.current = new mapboxgl.Map({
  container: mapContainer.current,
  style: 'mapbox://styles/mapbox/satellite-v9',
  center: [lng, lat],
  zoom: zoom
  });
  });
 

  return (
    
      <div>
        <div className="sidebar" style={{position:"relative",top:"50px"}}>
          Longitude: {lng} | Latitude: {lat} | Zoom: {zoom}
        </div>
        <div ref={mapContainer} className="map-container" />
      </div>
    
  )
}
