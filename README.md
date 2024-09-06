# AoCTemplateCPP
A template to run and profile Advent of Code solutions from the command line
___
This is a small template I made, mostly for myself, to solve the yearly Advent of Code challenges. I created this to prepare for the next event and as a way to study C++ further.

If you're looking at this, know that it needs some additional configuration to run properly. The `days` directory includes `day01` as an example, and the other days will need to be added in a similar fashion. Additionally, each day directory will need its own "input" file for that day's puzzle input. Populate the sample file with your own puzzle input and rename the file to `input`.

As you include new directories for each day, update `days/CMakeLists.txt` to include the day in the `DAYS` variable. `src/main.cpp` will also need to be updated to push new days to the `solutions` vector and their header files included, similar to the existing day01 solution.

Building the application will create an executable `aoc` in `{BUILD_DIRECTORY}/src`.
Running the application with no arguments will run all available solutions. Alternatively, passing integers as arguments will run the respective solutions for the given days. For example:
`aoc 01 03 04 07`

I've also only tested this on linux. Running this on Windows may need some additional changes

But if you've found this somehow, I'd be more than happy to hear feedback and suggestions on how to automate and improve this template further. I am a very novice programmer and I really have no idea what I am doing! 

Happy coding!
