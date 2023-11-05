# Exercise 04: Sed is for losers

Sed is a stream editor. A stream editor is used to perform basic text transformations on an input stream (a file or input from a pipeline). While in some ways similar to an editor which permits scripted edits (such as ed), sed works by making only one pass over the input(s), and is consequently more efficient. But it is sed’s ability to filter text in a pipeline which particularly distinguishes it from other types of editors.

---
## Functions/Methods used in this exercise
### File Handling:
- `open()`: Description: The open() method is used to open a file for reading, writing, or both, based on the specified file mode. It initializes a file stream object to work with the specified file.
- `close()`: Description: The close() method is used to close an open file. It finalizes any pending operations and releases the resources associated with the file stream.
- `fail()`: Description: The fail() method is a member function of file streams (e.g., ifstream, ofstream) and checks if any error flags are set on the stream. It returns true if any error has occurred during I/O operations on the stream.
- `eof()`: Description: The eof() method is a member function of file streams and is used to check if the end of the file has been reached. It returns true when the end of the file is encountered.
- `std::noskipws`: Description: std::noskipws is a manipulator used with input streams (e.g., istream) to disable the automatic skipping of white space characters. It ensures that whitespace, such as spaces and tabs, is read and not ignored during input operations.

### String Handling:
- `std::string::npos`: Description: std::string::npos is a constant representing the maximum value for the return type of the find() method in std::string. It is commonly used to indicate that a substring was not found within a string.
- `find()`: Description: The find() method is a member function of the std::string class. It is used to search for a substring within a string. It returns the position of the first character of the found substring or std::string::npos if the substring is not found.
---

## Additional
`<fstream>` is a C++ library that provides facilities for working with file input and output. It includes `classes` like `ifstream` (input file stream), `ofstream` (output file stream), and `fstream` (a combination of both input and output file stream). Here's a list of some commonly used functions and methods:
- open():
  - Member function of ifstream, ofstream, and fstream classes.
  - Opens a file for reading (ifstream), writing (ofstream), or both (fstream).
  - You can specify the file name and the mode (e.g., std::ios::in, std::ios::out, std::ios::app, etc.) as arguments.
  
- close():
  - Member function of ifstream, ofstream, and fstream classes.
  - Closes the open file.

- is_open():
  - Member function of ifstream, ofstream, and fstream classes.
  - Checks if a file is open for reading or writing.
  - Returns true if the file is open, false otherwise.
    
- clear():
  - Member function of the stream classes (ifstream, ofstream, fstream).
  - Clears the state of the stream, often used to recover from error states.
    
- good():
  - Member function of the stream classes.
  - Returns true if the stream is in a good state (no errors or EOF).

- fail():
  - Member function of the stream classes.
  - Returns true if an error occurred while reading or writing the stream.

- eof():
  - Member function of the stream classes.
  - Returns true if the end of the file has been reached.

- tellg() and tellp():
  - Member functions of ifstream and ofstream classes.
  - tellg() returns the current get (read) position in the file.
  - tellp() returns the current put (write) position in the file.

- seekg() and seekp():
  - Member functions of ifstream and ofstream classes.
  - Used to set the get (read) and put (write) positions within the file, respectively.

- ignore():
  - Member function of the ifstream class.
  - Ignores a specified number of characters or until a specific delimiter is encountered, allowing you to skip unwanted input.

- write():
  - Member function of the ofstream class.
  - Writes binary data to the file.

- read():
  - Member function of the ifstream class.
  - Reads binary data from the file.

- getline():
  - Member function of the ifstream class.
  - Reads a line of text from the file, stopping at a newline character or a specified delimiter.

- operator<< and operator>>:
  - Overloaded operators for formatted input and output.
  - Used for streaming data into and out of files or streams.
    
- good(), eof(), fail(), bad():
  - Functions that can be used to check the state of the stream, usually in conjunction with the rdstate() function.
