import React, { useState, useEffect } from "react";
import { useParams } from "react-router-dom";
import InfiniteScroll from "react-infinite-scroll-component";

import "./style.scss";

import { fetchDataFromApi } from "../../utils/api";
import ContentWrapper from "../../components/contentWrapper/ContentWrapper";
import MovieCard from "../../components/movieCard/MovieCard";
//import Spinner from "../../components/spinner/Spinner";
import noResults from "../../assets/no-results.png";
const SearchResult = () => {
  const [data, setData] = useState(null);
  const [pageNum, setPageNum] = useState(1);
  const [loading, setLoading] = useState(false);
  const { query } = useParams();
 // const { data, loading } = useFetch(`/trending/movie/${endpoint}`);
  const fetchInitialData = () => {
    setLoading(true);
    fetchDataFromApi(`/search/multi?query=${query}&page=${pageNum}`).then(
        (res) => {
            setData(res);
            setPageNum((prev) => prev + 1);
            setLoading(false);
        }
    );
    
};
useEffect(() => {
  setPageNum(1);
  fetchInitialData();
}, [query]);
  return (

    <div className="searchResultsPage">
 
    {!loading && (
        <ContentWrapper>
            {data?.results?.length > 0 ? (
                <>
                    <div className="pageTitle">
                        {`Search ${
                            data?.total_results > 1
                                ? "results"
                                : "result"
                        } of '${query}'`}
                    </div>
                  <div    className="content">
                    
                        {data?.results.map((item, index) => {
                            if (item.media_type === "person") return;
                            return (
                                <MovieCard
                                    key={index}
                                    data={item}
                                    fromSearch={true}
                                />
                            );
                        })}
              
              </div>
                </>
            ) : (
                <span className="resultNotFound">
                    Sorry, Results not found!
                </span>
            )}
        </ContentWrapper>
    )}
</div>
          
 
    
  )
}

export default SearchResult