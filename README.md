```


_____/\\\\\\\\\\\____________________________________________________________________________________________________________________/\\\\\\\\\_______________________________________         
 ___/\\\/////////\\\_______________________________________________________________________________________________________________/\\\////////________________________________________        
  __\//\\\______\///______________________________________________________________________________________________________________/\\\/________________/\\\__________/\\\_______________       
   ___\////\\\_____________/\\\\\\\\______/\\\\\\\\__/\\\____/\\\__/\\/\\\\\\\______/\\\\\\\\_____________/\\\\\\\\\\\____________/\\\_________________\/\\\_________\/\\\_______________      
    ______\////\\\________/\\\/////\\\___/\\\//////__\/\\\___\/\\\_\/\\\/////\\\___/\\\/////\\\___________\///////////____________\/\\\______________/\\\\\\\\\\\__/\\\\\\\\\\\___________     
     _________\////\\\____/\\\\\\\\\\\___/\\\_________\/\\\___\/\\\_\/\\\___\///___/\\\\\\\\\\\____________________________________\//\\\____________\/////\\\///__\/////\\\///____________    
      __/\\\______\//\\\__\//\\///////___\//\\\________\/\\\___\/\\\_\/\\\_________\//\\///////______________________________________\///\\\______________\/\\\_________\/\\\_______________   
       _\///\\\\\\\\\\\/____\//\\\\\\\\\\__\///\\\\\\\\_\//\\\\\\\\\__\/\\\__________\//\\\\\\\\\\______________________________________\////\\\\\\\\\_____\///__________\///________________  
        ___\///////////_______\//////////_____\////////___\/////////___\///____________\//////////__________________________________________\/////////________________________________________ 


                                                                                            ad8888888888ba
                                                                                           dP'         `"8b,
                                                                                           8  ,aaa,       "Y888a     ,aaaa,     ,aaa,  ,aa,
                                                                                           8  8' `8           "88baadP""""YbaaadP"""YbdP""Yb
                                                                                           8  8   8              """        """      ""    8b
                                                                                           8  8, ,8         ,aaaaaaaaaaaaaaaaaaaaaaaaddddd88P
                                                                                           8  `"""'       ,d8""
                                                                                           Yb,         ,ad8"   
                                                                                            "Y8888888888P"
```

# About this tutorial 

This tutorial was a secondary write up i plan on doing about the C++ programming language. This tutorial will teach the basics to advanced C++ code from using simple variables to data types and using OOP concepts in C++ with the use of public private and friend classes. It will start off like any other introduction where i introduce who i am currently and what my focus of the article is then go into the basics of both security in applications and development as well as the basics of the C++ programming language, NOTE THIS TUTORIAL IS FOR C++ VERSION 20. This tutorial will teach you basic concepts of security as well as making things like encryption scripts, brute forcers, file crawlers, system loaders, authentication systems, key generators, and packet parsers and maybe even IDS's ( Intrusion Detection Systems ). 

The plan for this tutorial is to act again like any other one, it will talk about code bricks and describe them as you move on and on in the project. 


# Whoami 

my name is RE43P3R i am intermediate in cyber security, a game cheat developer, systems / security and authentication systems developer, as well as a legacy developer on my own time. I have had experience in multiple languages those which include 

Language Name  | 
-------------  | 
Fortran95      | 
Fortran77      | 
Fortran2003    |
Perl 3-5       | 
Some RAKU      | 
Ruby           | 
C++            | 
Go             | 

and others that i have yet to do write ups on, if you have not seen my other write ups i have multiple on multiple programming languages currently 

C++, Go, Perl, and general fortran and math

* C++ tutorial                              https://github.com/ArkAngeL43/Advanced-And-Secure-CXX <br>
 
* GO Basics                                 https://github.com/ArkAngeL43/Basics-Of-Go <br>

* GO Advanced Security+                     https://github.com/ArkAngeL43/Go-Cyber-Weapons-Development <br> 

* Fortran Notes                             https://github.com/ArkAngeL43/fortran-notes <br> 

* Perl Cyber weapons                        https://github.com/ArkAngeL43/Perl-basics-and-cyber-weapons-development <br>

* EXIF and Digital Forensics with images    https://github.com/ArkAngeL43/EXIF-Stegonography-and-image-injection <br> 


# Credits and reasons for this tutorial 

Recently i have just gotten a job for Authentication and systems development for a small group of people, and the code and backend of the system will be written in C++20, i have not used C++ at all in a long time which is what prompted the article, at the time of writing this i have so far spent about 4 months in the C++ programming language since a year ago and it has definitely changed alot. i want to thank the writer of the `eighth edition of C++14 and C++17 Coverage Sams teahc yourself C++ in one hour a day` despite us being in C++20 now this book has helped me alot through the proces sof writing this understanding new ways to use and write C++, the very basics of C++ but with a tad touch to it. I highly suggest if you are new to C++ you read that book, it is 700+ pages of pure amazing C++ again if your reading this adn using C++20 it might not be worth the time but it still teaches concepts used in C++.


# NOTICE 

This article is currently under development....


# Application development and a talk about security

In most of these tutorials i always have a say on security, thats because of my experience in the field of development in things such as legacy development, game cheat development, systems and auth development, and so on. Over the year or so i have been programming there is one thing i notice to actually be rare, that being security in applications especially games. The one thing i have always urged people the most during development especially when you are selling people your program or releasing it out to the public to use TO FOCUS ON SECURITY! stop wasting your time with frontend, you're main concern should be the security of an application and how it runs and its functionality. For example, right now i am working with a game called CS:GO and building cheat systems and auth systems for the game cheat application itself, this game cheat toolkit uses external tools things like player highlight and color and such. im actually going to split this talk on security into a small section about game cheating.

> What is an external cheat 

External cheats are simple, they are cheats that are not injected into the game code itself or the vulnerable DLL of the game

> What is an internal cheat 

simply internal cheats are unlike external injected into the vulnerable dll or game or executeable to make code run, with this you can mess with the games functions such as creativity, designs, hit boxes, players etc.

> How does game cheating typically happen 

game cheating is developed or happens when a hacker or developer comes across a vulnerability in the games files, and uses their programming skills to inject code into a process. For example in the game CS:Go you can get character highlight and seeing through walls and even aimbot by simply getting the games PID and memory location, taking memory values themselves for things like POS ( Position ) and injecting it into the memory. Here is an example i found online of a simple ESP (Extra sensory precision) seen below 


<p align="center">
  <img src="git/ESP.png" width="350" title="hover text">
</p>

most EXTERNAL cheats such as this very simple ESP is not picked up by AC ( Anti Cheat ), this is because most anti cheat systems are NOT designed to pick it up.

> How do companies and game devs fix these issues 

Typically game developers put what i like to call digital duct tape on the problem. Simply all they do is just install ANTI CHEAT systems like `VAC` to help detect if someone is cheating or not. As said above however Cheats are often not seen or picked up by anti cheat systems if they are external, which means just slapping anti cheat is the most idiotic practice you can go about when trying to fix a vulnerability. Think of that like changing your IP when someone exploits your machine and already has access, it really does not do much but hang people off for a bit until they take 3 hours to think of a better solution to better exploit that program. In this example above you saw a cheat that was external ESP that was able to bypass the VAC system that the developers of CS:GO pulled in to the game to fix an issue that will never be actually fixed. It is of the most IMPORTANT that you make sure applications especially when programming in languages like C++ are constantly CONSTANTLY updated and staying secure and if a vulnerability pops up say a 0-DAY ( A vulnerability a hacker discovers before the developers do ) then you MUST get to fixing it right away if you want to keep you reputation.


