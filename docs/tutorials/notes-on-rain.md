# Notes on Weather
The goal is to implement a shadow rain equivalent. I'm hoping that this will be a informative reading about it.

## Files
The main file to pay attention to are 
- `src/field_weather_effect.c`
- `src/field_weather.c`
- 
In terms of tiles, we will be looking at `gWeatherRainTiles` or `"graphics/weather/rain.png"`.

## Things to know.
In `src/field_weather.c`, there are 4 methods you need to know:
```c
// src/field_weather.c
// There's a good comment on what gWeatherPtr is.
struct Weather *const gWeatherPtr = &gWeather;
 
struct WeatherCallbacks
{
    void (*initVars)(void); // initialization of a bunch of state
    void (*main)(void); // Main Task loop
    void (*initAll)(void); // Similar to initVars. For whatever reason, these are very similar to initVars (they call initVars).
 
    bool8 (*finish)(void); // destructor / deinitialization
}
```
