<div id="top"></div>

[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="images/42_Logo.svg.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">libft</h3>

  <p align="center">
    My personnal C programming language library.
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#installation">Installation</a>
    </li>
     <li>
      <a href="#Data-conversion">Data-conversion</a>
    </li>
    <li>
      <a href="#String-manipulation">String-manipulation</a>
    </li>
    <li>
      <a href="#Memory-allocation">Memory-allocation</a>
    </li>
    <li>
      <a href="#Memory-manipulation">Memory-manipulation</a>
    </li>    
    <li>
      <a href="#File-descriptor-tools">File-descriptor-tools</a>
    </li>
    <li>
      <a href="#Printf">Printf</a>
    </li>
    <li>
      <a href="#Character-validation">Character-validation</a>
    </li>
    <li>
      <a href="#Corrections">Corrections</a>
    </li>
    <li>
      <a href="#Authors">Authors</a>
    </li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

<p align="left">
  This is my c programming language library. Almost every fonction in it is made by myself. I want to update it with fonction that I used in programs that might be usefull in other situations.

 <!-- INSTALLATION -->
## Installation
```markdown
git clone git@github.com:Tonyg92x/42libft.git
```
<!-- DATA-CONVERSION -->
## Data-conversion
<p align="left">
  <h3>ft_atoi</h3>
  Convert a string containing an integer number to an integer.
 
  <h3>ft_itoa</h3>
  Take the integer entered and put the value in a string as multiple characters.
  
  <h3>ft_utoa</h3>
  Take the unsigned int entered and put it's char value in a string. The string returned is allocated with malloc so don't forget to free it.
  
  <h3>ft_atol</h3>
  Take the integer entered and convert it into a long variable (It's pretty usefull to test integer limits).
  
<!-- STRING-MANIPULATION -->
## String-manipulation
<p align="left">
  <h3>ft_toupper</h3>
  Put the letter entered in uppercase. If it's already uppercase or it isnt a letter, do nothing.
  
  <h3>ft_tolower</h3>
  Put the letter entered in lowercase. If it's already in lowercase or it isnt a letter, do nothing.
  
  <h3>ft_strlen</h3>
  Return the length of the strin entered.
  
  <h3>ft_strchr</h3>
  Return a pointer of the first occurence of c in s else return NULL.
  
  <h3>ft_strrchr</h3>
  Locate the last occurence of c in the string pointed by s. The '\0' is considered a part of the string so if c = '\0' the function locate the terminating '\0'.
  
  <h3>ft_strlcpy</h3>
  Copy char's from src to dest (size time) and put '\0' the end.
  
  <h3>ft_strlcat</h3>
  Put the string src at the end of string dst. Return the size of the dst string>

  <h3>ft_strncmp</h3>
  Compare s1 with s2 for n character. Return 0 if it's the same, if not return the s1 - s2 value of the dif.
  
  <h3>ft_strnstr</h3>
  Look for a string (needle) instide the other string (haystack). Return the pointer to the start of the needle, otherwise return NULL. 
  
  <h3>ft_substr</h3>
  Return a new string, that has the content of s string, starting at the start argument as index. The new string is allocated with malloc so don't forget to free it.

  <h3>ft_strjoin</h3>
  Join s1 and s2 strings together. The value return is allocated with the malloc fonction so don't forget to free.
  
  <h3>ft_strtrim</h3>
  Remove every character (that is in set) of the s1 string. Return a new string with the result allocated with malloc, so don't forget to free it.
  
  <h3>ft_split</h3>
  Split the string between c character in multiple strings. The return is a pointer that has every pointer of every string made. The memory is allocated by malloc, in 2D so don't forget to ft_free2d.

  <h3>ft_striteri</h3>
  Pass the s string into the f fonction.
  
  <h3>ft_strmapi</h3>
  Pass every character of the string s in the f contion. Return the result in a allocated string using malloc, so don't forget to free.

  
<!-- MEMORY-ALLOCATION -->
## Memory-allocation
<p align="left">
  xxxx
  
<!-- MEMORY_MANIPULATION -->
## Data-conversion
<p align="left">
  xxxx
  
<!-- FILE-DESCRIPTOR-TOOLS -->
## File-descriptor-tools
<p align="left">
  xxxx
  
<!-- CHARACTER-VALIDATION -->
## Character-validation
<p align="left">
  xxxx
  
<!-- PRINTF -->
## Printf
<p align="left">
  xxxx
 
 <!-- CORRECTIONS -->
## Corrections
<p align="left">
  For the project, before submetting my project, I used Tripouille tester (https://github.com/Tripouille/libftTester) , 
alelievr tester (https://github.com/alelievr/libft-unit-test) and ska42 war-machine tester (https://github.com/ska42/libft-war-machine) to test multiple input. In the future the project may change and these tester may be outdated. 

<!-- Authors -->
## Authors
<p align="left">
  Anthony Guay anthony.guay112@gmail.com
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/anthony-guay-75b27421b/
[product-screenshot]: images/screenshot.png
