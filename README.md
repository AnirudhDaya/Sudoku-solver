# SUDOKU SOLVER

It's a simple program for solving sudoku of any difficulty level.   
It uses the basics of recursion to solve the sudoku. 

## Prerequisite

Make sure to install the latest version of  [mingw](https://sourceforge.net/projects/mingw/) to run this program.

## Get the program running  
### Input the sudoku
Inorder to input other sudoku,  
Firstly, open the .cpp file in any text editor or IDE of your preference.

```cpp
    vector<vector<char>> sudoku = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'}, 
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '.', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };  

//Here '.' suggests the blank spaces in the sudoku
```
Now, you can edit this part of the code according to a question of your choice and make sure that all numbers are enclosed within **_single quotes_**


### Commands to run
#### Windows

```cpp
g++ sudoku_solver.cpp -o filename   //this line compiles the program and makes sure it's error free
filename                            //file name suggests the name of the file you want to store the program as

```

#### Linux

```cpp
g++ sudoku_solver.cpp -o filename   //this line compiles the program and makes sure it's error free
./filename                            //file name suggests the name of the file you want to store the program as

```

### Output 

The output of the above input of sudoku is:  
![sudoku](https://user-images.githubusercontent.com/94374523/143850676-0f9b520e-0087-468a-bdd6-a0e89b145d6b.JPG)


## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

