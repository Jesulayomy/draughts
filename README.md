<h1 align="center"> Draughts(Draft/Checkers) </h1>
### Usage
Compile main and functions with `gcc main.c functions.c -o checkers` Then run
the executeable `bash ./checkers`

### Movement
Entries are collected as row then columns (horizontal then vertical location)

```comandline
Enter the location of your piece to move i.e 07 for row
1
2
Enter the location to move to
2
3
  0|1|2|3|4|5|6||7
  0|A| |A| |A| |A| |0
  1| |-| |A| |A| |A|1
  2| | |A| | | | | |2
  3| | | | | | | | |3
  4| | | | | | | | |4
  5| | | | | | | | |5
  6|B| |B| |B| |B| |6
  7| |B| |B| |B| |B|7
    0|1|2|3|4|5|6||7
```

