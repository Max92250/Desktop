import axios from "axios";

const BASE_URL = "https://api.themoviedb.org/3";
const TMDB_TOKEN = "eyJhbGciOiJIUzI1NiJ9.eyJhdWQiOiIyMDQzNGU5ODU2ZWZmZmYyOWViM2M4ZWQ5YmIxNjUwZiIsInN1YiI6IjY0ODg3ZDRhZTI3MjYwMDE0N2JiOGUyNyIsInNjb3BlcyI6WyJhcGlfcmVhZCJdLCJ2ZXJzaW9uIjoxfQ.VItISvI0UXm3VAb_K2TgC5fNBOKCW1uO4L3VNRB3chc";

const headers = {
    Authorization: "bearer " + TMDB_TOKEN,
};

export const fetchDataFromApi = async (url, params) => {
    try {
        const { data } = await axios.get(BASE_URL + url, {
            headers,
            params,
        });
        return data;
    } catch (err) {
        console.log(err);
        return err;
    }
};