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
      <a href="#Memory-management">Memory-management</a>
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
      <a href="#Linked-list">Linked-list</a>
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
  This is my c programming language library.

 <!-- INSTALLATION -->
## Installation
  Copy the repository in the project you want to use the library.
```markdown
git clone git@github.com:Tonyg92x/42libft.git
```
  Then all you got to do to have the libft.a file is to execute the command make in the folder. You can then compile your'e project with the libft.a and it will give you every fonction in the library.
<!-- DATA-CONVERSION -->
## Data-conversion
<details>
  <summary>Fonctions</summary>
  <h3>ft_atoi</h3>
  Convert a string containing an integer to an integer.
 
  <h3>ft_itoa</h3>
  Take the integer entered and put the value in a string. The string returned is allocated with malloc so don't forget to free it.
  
  <h3>ft_utoa</h3>
  Take the unsigned int entered and put it's char value in a string. The string returned is allocated with malloc so don't forget to free it.
  
  <h3>ft_atol</h3>
  Take a string containing a number and convert it into a long variable (It's pretty usefull to test integer limits).
</details>
  
<!-- STRING-MANIPULATION -->
## String-manipulation
<details>
  <summary>Fonctions</summary>
  <h3>ft_toupper</h3>
  Put the letter entered in uppercase. If it's already uppercase or it isnt a letter, do nothing.
  
  <h3>ft_tolower</h3>
  Put the letter entered in lowercase. If it's already in lowercase or it isnt a letter, do nothing.
  
  <h3>ft_strlen</h3>
  Return the length of the string entered.
  
  <h3>ft_strchr</h3>
  Return a pointer of the first occurence of c in s else return NULL.
  
  <h3>ft_strrchr</h3>
  Locate the last occurence of c in the string pointed by s. The '\0' is considered a part of the string so if c = '\0' the function locate the terminating '\0'.
  
  <h3>ft_strlcpy</h3>
  Copy char's from src to dest (size time) and put '\0' the end.
  
  <h3>ft_strlcat</h3>
  Put the string src at the end of string dst. Return the size of the dst string.
  
  <h3>ft_strdup</h3>
  Allocate exactly the right amount of space src string into an other string using the malloc fonction. Don't forget to free. (Usefull if you want to use the less amount of memory possible.

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
</details>
  
<!-- MEMORY-management -->
## Memory-management
<details>
  <summary>Fonctions</summary>
  
 <h3>ft_calloc</h3>
   Allocate memory with the malloc fonction; allocate size (in byte) * count (nomber of element). Put the value '\0' on everything after.

 <h3>ft_free2d</h3>
  Free every adresse entered in the pointer of pointers, then free the pointer of pointers. 

</details>

<!-- MEMORY-MANIPULATION -->
## Memory-manipulation
<details>
  <summary>Fonctions</summary>
  
  <h3>ft_memset</h3>
  Write len number of time of value c in the string b.
  
  <h3>ft_bzero</h3>
  Put the value '\0' n time in the pointer entered.
  
  <h3>ft_memcpy</h3>
  Copy n bytes of src pointer into dst pointer. Return the pointer to the dst pointer. Protected from overlaping.
  
  <h3>ft_memmove</h3>
  Same as memcpy, but it is not protected from overlaping.
  
  <h3>ft_memcmp</h3>
  Compare the value of the first index of s1 with the same index of s2. Return 0 if they are the same, and s1[byte] - s2[byte] otherwise.
  
  <h3>ft_memchr</h3>
  Locate the first location of the occurence c in the string s. Look for it n time. Return a pointer to the location, otherwise return NULL.
</details>
  
<!-- FILE-DESCRIPTOR-TOOLS -->
## File-descriptor-tools
<details>
  <summary>Fonctions</summary>
  
  <h3>ft_putchar_fd</h3>
  Write the character c in the fd entered.

  <h3>ft_putnbr_fd</h3>
  Fonction that write the integer entered in the fd entered.
  
  <h3>ft_putnbr_unsigned_fd</h3>
  Fonction that write the unsigned integer entered in the fd entered.
  
  <h3>ft_putstr_fd</h3>
  Fonction that write the string entered in the fd entered.

  <h3>ft_putendl_fd</h3>
  Write the string s in the fd entered, then put a new line at the end.
</details>
  
<!-- CHARACTER-VALIDATION -->
## Character-validation
<details>
  <h3>ft_isdigit</h3>
  Return 1 (true) if the character entered is a number. Return 0 (false) otherwise.
  
  <h3>ft_isalpha</h3>
  Return 1 (true) if the character entered is a letter. Return 0 (false) otherwise.  
  
  <h3>ft_isalnum</h3>
  Return 1 (true) if the character entered is a letter or a digit. Return 0 (false) otherwise.
  
  <h3>ft_isascii</h3>
  Return 1 (true) if the character entered is in the ASCII table. Return 0 (false) otherwise.  
  
  <h3>ft_isprint</h3>
  Return 1 (true) if the character entered is printable. Return 0 (false) otherwise.
  <summary>Fonctions</summary>
  
</details>
  
<!-- PRINTF -->
## Printf
<details>
  <summary>Fonctions</summary>
  
 <h3>ft_printf</h3>
  Home made printf fonction. Git Repo : https://github.com/Tonyg92x/42printf
  
<h3>ft_print_chars</h3>
  Fonction that is used by printf to print characters.
  
<h3>ft_print_dui</h3>
  Fonction that is used by printf to print integers.
  
<h3>ft_puthex</h3>
  Fonction that is used by printf to print hexadecimals values.
</details>
 
<!-- LINKED_LIST -->
## Linked-list
<details>
  <summary>Fonctions</summary>
  
 <h3>ft_push</h3>
  Fonction's used in the push_swap program. Linked lists fonctions, might be usefull later. Need to update for project that can use more then 2 lists.
  
<h3>ft_rotate</h3>
  Linked list fonction that shift up every element in a list. The first element become the last one. Might need to update it.
  
<h3>ft_reverse_rotate</h3>
   Linked list fonction that shift down every element in a list. The last element become the first one. Might need to update it.

<h3>ft_swap</h3>
  Linked-listed fonction that swap the first element of a list with the second. Might need to update it.
</details>

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
