<div align="center" id="top"> 

&#xa0;

  <!-- <a href="https://mco2_lbyarch.netlify.app">Demo</a> -->
</div>

<h1 align="center">x86-to-C interface: Converting arrays from double floating point to double unsigned integer</h1>

<!-- Status -->

<!-- <h4 align="center">
	🚧  MCO2_LBYARCH 🚀 Under construction...  🚧
</h4>

<hr> -->

<p align="center">
  <a href="#about">About</a> &#xa0; | &#xa0; 
  <a href="#run">How to run</a> &#xa0; | &#xa0; 
  <a href="#result" target="_blank">Performance Result</a> &#xa0; | &#xa0; 
  <a href="https://github.com/Primeputin" target="_blank">Author1</a> &#xa0; | &#xa0; 
  <a href="https://github.com/nimbus7462" target="_blank">Author2</a>
</p>
<div id="about">
  <h2> Introduction </h2>

A grayscale image is internally represented as a 2 dimensional array. Size is defined by the number of pixels in a row (width), and number of pixels in a column (height). Each cell represents the pixel value. Pixel values in grayscale are represented as white, black, and shades of gray using different numerical data type representation depending on the library used.

Some Image Processing Libraries represent grayscale images as having double float based pixel values between 0 to 1: 0 for black, 1 for white, 0.25 lighter gray, 0.75 darker gray, and all other gray values in between.

Image =

0.25, 0.35, 0.45, 0.33

0.55, 0.65, 0.75, 0.33

0.85, 0.95, 0.15, 0.33

Some Libraries represent using 8 bit unsigned integer. 0 for black, 255 for white, 64 lighter gray, 191 darker gray, and all other gray values in between.

Image =

64, 89, 114, 84

140, 166, 191, 84

216, 242, 38, 84

To enable using different image processing libraries simultaneously, conversion from one format to the other has to be done. Perform Mapping from double precision float based grayscale to uint8 based integer representation. Each pixel is calculated using ratio and proportion equation 
<br>
<strong> f/i = 1/ 255 </strong> 

Where f is the double float based pixel value and i is the integer based pixel value

<h2>Task</h2>

Implement a program that converts the grayscale image representation from float based to integer based using C and x86 assembly language. Implement the function imgCvtGrayDoubleToInt().

<h3>*Required to use functional scalar SIMD registers</h3>

<h3>*Required to use functional scalar SIMD floating-point instructions</h3>

Input: height, width, double float pixel values

Example.

3 4

0.25 0.35 0.45 0.33

0.55 0.65 0.75 0.33

0.85 0.95 0.15 0.33


Output: Integer pixel values

Example.

64,  89,  114, 84

140, 166, 191, 84

216, 242, 38,  84

</div>

<br>

<div id = "run">
  <h2>How to run the code</h2>
  <p>
      Make sure you're in the appropriate directory in the terminal/command prompt
  <P>
  <code>
    nasm -f win64 function.asm
    <br>
    gcc -c main.c -o main.obj -m64
    <br>
    gcc main.obj function.obj -o main.exe -m64
    <br>
  </code>
</div>

<div id = "result">
  <h2>Performance Result</h2>
  <p>
      To do the perfomance testing, ...
  </p>
</div>
