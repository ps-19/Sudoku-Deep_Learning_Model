# Sudoku_Deep_Learning_Model

This project is a Computer Vision application that solves a 9x9 Sudoku puzzle using Deep Learning, which is a part of a broader family of Machine Learning and also a subset of Artificial Intelligence and the Backtracking Algorithm, which is a popular recursive algorithm for solving the puzzle.

A simple Deep Learning based project. It aims to solve sudoku through webcam. Python is the selected language in this case due to its simplicity, portability, and creativity with OpenCV, though it has a slower run time than C/C++. The image is read with OpenCV’s input function and the color channels are reduced from 3 to 1. 

Gaussian Blur has been used to reduce Background Noise. The Gaussian filter is a low-pass filter that removes the high-frequency components from the image ie noise. In our case, a kernel size of (1,1) is used due to less noise. 

Digit Extraction was the most challenging stage of the project but I was able to pull through. The first step carried out was writing a function to get all the 81 cell positions of the puzzle in the form of a 2-d array. 

File cotains: 
- `Sudoku` is root file.
- `Sudoku Solver` file contains code to solve sudoku using `backtracking` algorithm, if webcam successfully captures the matrix of unsolved sudoku.

Tech Used: `OpenCV`, `Tensorflow`, `Keras`, `Pillow`, `Numpy`, and `Matplotlib`.

#Backtracking
---
```

A backtracking algorithm is a recursive algorithm that attempts to solve a given problem by testing all possible paths towards a solution until a solution is found. Each time a path is tested, if a solution is not found, the algorithm backtracks to test another possible path and so on till a solution is found or all paths have been tested.

```
---

Following Steps has been deployed:

- **Image Preprocessing.**
- **Reading the image as grayscale.**
- **Gaussian Blur to reduce Background Noise.**
- **Inverse Binary Threshold.**
- **Probabilistic Hough Transform.**
- **Perspective Transform.**
- **Convolution Neural Network Model.**
- **Digits Extraction.**
- **Backtracking.**
- **Digits Placement.**
