# Monsters
Beware, this project is full of monsters!

For this project, you will use C++ classes with polymorphism.

You may work individually or with a partner of your choosing.

## Setup
Use this Guided Project template to create a new repository (see [GitHub-with-CLion](https://github.com/uvmcs120s2021/GitHub-with-CLion) repo for directions).
**Your repository must be named with the convention: Monsters-netid**, where netid is your UVM NetID username.
* If you are collaborating, the format is Monsters-netid1-netid2. Have one partner create the repository and give the other partner access on GitHub: on the repository page, go to the Settings tab, choose Manage Access, and add the person with their GitHub username.

Remember to commit and push frequently.

## Polymorphism

Polymorphism is an important object-oriented programming concept. This project will give you practice with recognizing and writing code that uses polymorphism.

Polymorphism occurs when you have two (or more) objects of the same type, you call the same method on them, and different things happen. At first glance, this is not intuitive behavior. However it is very useful when, for example, you have a bunch of shape objects you want to draw, or you want to calculate your final grade in a bunch of different courses, or when you have a bunch of monsters that scare you in different ways! You can group objects of related classes together into a vector and have each one perform that overridden task (which will allow shapes to be drawn differently, courses to calculate their final grades differently, and monsters to scare differently). This is the glory of polymorphism!

To code polymorphism, you will need the following things:
1. At least two classes that are related through inheritance (e.g. a parent-child relationship, a sibling relationship, etc.).
1. At least two pointers or references to the parent type.
1. The pointers/references to point/refer to objects of different classes.
1. To call an overridden method on both objects.

In this project, you will have different types of Monsters with different subclasses, and you will use a vector of Monster pointers to demonstrate polymorphism. 

## Meet the Monsters

There is lots of starter code given to you for this project, so let's overview it all.

Firstly, you will not be running all of these files at the same time. If you use the dropdown menu between the Build and Run buttons in CLion, you will notice that there are four different executables: `Darkness_Monster`, `Darkness_Monster_Testing`, `Water_Monster`, and `Water_Monster_Testing`. This is because there are four different `add_executable` lines in `CMakeLists.txt`, each linking together a subset of the source files.

### Water Monsters
Three Water Monster classes are provided for you: 
* `Water_Monster` (superclass)
* `Lake_Monster` (subclass)
* `Sea_Monster` (subclass)

All three classes have been declared and defined in their own header and .cpp files and tested in `Water_Monster_Testing.cpp`. 
* You can run the test suite with the `Water_Monster_Testing` executable.

Complete the TODOs in `Water_Monster_Main.cpp` to complete the main program. 
You can run it using the `Water_Monster` executable.

### Darkness Monsters

Three classes are provided for you: 
* `Darkness_Monster` (superclass)
* `Closet_Monster` (subclass)
* `Under_Bed_Monster` (subclass)

Each class has one method that hasn't been implemented. See TODO comments in the header and .cpp files to complete the classes.

Complete the testing suite in `Darkness_Monster_Testing.cpp` by adding test cases for the class methods you implemented.
You can run it with the `Darkness_Monster_Testing` executable.

Complete the TODO comments in the main function in `Darkness_Monster_Main.cpp`.
    
### Sky Monsters
Two classes are provided for you: 
* `Cloud_Monster` (subclass)
* `Comet_Monster` (subclass)

**Write the superclass `Sky_Monster`** in header and .cpp files. Use the two subclasses and the testing suite to determine its contents.
Uncomment the `add_executable` line for `Sky_Monster_Testing` in `CMakeLists.txt`.
* Note: the testing suite in `Sky_Monster_Testing.cpp` will not compile and pass until you have implemented the superclass correctly.

## Check your understanding

Answer the questions from the Water Monster and Darkness Monster TODOs:
    
    Calling eat_person() on all the water monsters is not polymorphism because something different happens for each type of water monster
    Calling scare on all the monsters is pollymorphism because it is using the method overrided in the water monster file method

Which Sky Monster method(s) would you use to demonstrate polymorphism in a main program? Justify your answer.

    The method that would show polymorphism is the scare method in Skymonster bc it uses an override and has no implimentation in the Skymonster files 

## Grading

This project is due on Gradescope by 11:59pm ET on Friday, March 19th.
* If you are collaborating, both partners have to submit on Gradescope.

### Grading Rubric
- [ ] (3 pts) Water Monster TODOs
- [ ] (6 pts) Darkness Monster TODOs
- [ ] (8 pts) Sky Monster TODOs
- [ ] (3 pts) Answer all questions in the README file
