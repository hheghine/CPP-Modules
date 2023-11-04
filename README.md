# CPP Modules

This modules are an introduction to Object-Oriented Programming.

```
                            ____
                         _.' :  `._
                     .-.'`.  ;   .'`.-.
            __      / : ___\ ;  /___ ; \      __
          ,'_ ""--.:__;".-.";: :".-.":__;.--"" _`,
          :' `.t""--.. '<@.`;_  ',@>` ..--""j.' `;
               `:-.._J '-.-'L__ `-- ' L_..-;'
                 "-.__ ;  .-"  "-.  : __.-"
                     L ' /.------.\ ' J                
                      "-.   "--"   .-"                             _                            
                     __.l"-:_JL_;-";.__                           /\ \         _          _      
                  .-j/'.;  ;""""  / .'\"-.                       /  \ \       /\ \       /\ \    
                .' /:`. "-.:     .-" .';  `.                    / /\ \ \   ___\ \_\   ___\ \_\   
             .-"  / ;  "-. "-..-" .-"  :    "-.                / / /\ \ \ /___/\/_/_ /___/\/_/_  
          .+"-.  : :      "-.__.-"      ;-._   \              / / /  \ \_\\__ \/___/\\__ \/___/\ 
          ; \  `.; ;                    : : "+. ;            / / /    \/_/  /\/____\/  /\/____\/ 
          :  ;   ; ;                    : ;  : \:           / / /           \ \_\      \ \_\     
         : `."-; ;  ;                  :  ;   ,/;          / / /________     \/_/       \/_/     
          ;    -: ;  :                ;  : .-"'  :        / / /_________\                        
          :\     \  : ;             : \.-"      :         \/____________/                        
           ;`.    \  ; :            ;.'_..--  / ;
           :  "-.  "-:  ;          :/."      .'  :
             \       .-`.\        /t-""  ":-+.   :
              `.  .-"    `l    __/ /`. :  ; ; \  ;
                \   .-" .-"-.-"  .' .'j \  /   ;/
                 \ / .-"   /.     .'.' ;_:'    ;
                  :-""-.`./-.'     /    `.___.'
                        \ `t  ._  / 
                         "-.t-._:'

```
- [Module 00](#module-00) ― Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff
- Module 01 ― Memory allocation, pointers to members, references, switch statement
- Module 02 ― Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form
- Module 03 ― Inheritance
- Module 04 ― Subtype polymorphism, abstract classes, interfaces

## Module 00
---
### Exercise 00: Megaphone

Just to make sure that everybody is awake, in a C++ manner. The program should behaves as follows:

<details>
<summary><i>Megaphone</i></summary>

```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```
</details>

---
### Exercise 01: My Awesome PhoneBook

Welcome to the 80s and their unbelievable technology! This is a program that behaves
like a `crappy` awesome phonebook software.

<details>
<summary><i>Crappy</i></summary>

```
$>./crappy 

Welcome to Crappy! A phonebook for up to 8 contacts is created.
Command List
        ADD:    save a new contact
        SEARCH: display a specific contact
        EXIT

$>Enter a command > ADD
Enter the first name: James
Enter James's last name: Bond
Enter James's nickname: 007             
Enter James's phone number: +44 007 007 007
Enter James's darkest secret: In his early years as a spy, James Bond was involved in an operation that went tragically wrong. 
James successfully added to phonebook [1/8]

$>Enter a command > SEARCH
_____________________________________________
|     Index|First Name| Last Name|  Nickname|
|----------|----------|----------|----------|
|         1|     James|      Bond|       007|
---------------------------------------------
```
</details>

---
### Excercise 02: The Job Of Your Dreams

Something went wrong and a source file was deleted by mistake. Your first task is to recreate a lost file.

Your fellow developers give you a bunch of files. Compiling **tests.cpp** reveals that
the missing file is **Account.cpp**. Lucky you, the header file **Account.hpp** was saved.
There is also a **log file**. Maybe you could use it in order to understand how the Account
class was implemented.
Your fellow developers give you a bunch of files. Compiling tests.cpp reveals that
the missing file is Account.cpp. Lucky you, the header file Account.hpp was saved.
There is also a log file. Maybe you could use it in order to understand how the Account
class was implemented.

<details>
<summary><i>The Log File</i></summary>

```
[19920104_091532] index:0;amount:42;created
[19920104_091532] index:1;amount:54;created
[19920104_091532] index:2;amount:957;created
[19920104_091532] index:3;amount:432;created
[19920104_091532] index:4;amount:1234;created
[19920104_091532] index:5;amount:0;created
[19920104_091532] index:6;amount:754;created
[19920104_091532] index:7;amount:16576;created
[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
[19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
[19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
[19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
[19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
[19920104_091532] index:0;p_amount:47;withdrawal:refused
[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
[19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
[19920104_091532] index:5;p_amount:23;withdrawal:refused
[19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
[19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
[19920104_091532] index:2;amount:864;deposits:1;withdrawals:1
[19920104_091532] index:3;amount:430;deposits:1;withdrawals:1
[19920104_091532] index:4;amount:1245;deposits:1;withdrawals:1
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:106;deposits:1;withdrawals:1
[19920104_091532] index:7;amount:8942;deposits:1;withdrawals:1
[19920104_091532] index:0;amount:47;closed
[19920104_091532] index:1;amount:785;closed
[19920104_091532] index:2;amount:864;closed
[19920104_091532] index:3;amount:430;closed
[19920104_091532] index:4;amount:1245;closed
[19920104_091532] index:5;amount:23;closed
[19920104_091532] index:6;amount:106;closed
[19920104_091532] index:7;amount:8942;closed
```
</details>

---
