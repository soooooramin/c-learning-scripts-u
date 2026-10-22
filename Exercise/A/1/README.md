# A01
## 1. Write a program to select the minimum number in three numbers.
- The three numbers are given in main function.
- You must select the minimum number in a function.

## 2. Write a program to display prime numbers from 1 to 100.
```
$ ./a01-02
2
...
97
```

## 3. Write a program to count letter ‘c’ in text file.
- A text file “constitution.txt” is used as sample text file.
```
$ ./a01-03
43
```

### Note;
For read files, we need to write `FILE *fp` and `fopen("example.txt", "r")`

```
example:
# Open the file using 'fopen function' and return 
FILE *fp = fopen("example.txt", "r");
```