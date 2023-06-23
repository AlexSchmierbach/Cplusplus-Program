# Cplusplus-Program (Airgead Banking App)
This program is the first in my portfolio during my time at Southern New Hampshire University studying to get my
BS in Computer Science.

## Summary
This program presents an easy, user friendly menu of options to input important values related to user
investment interests. Following along with the requirements, specifications and standards given from the client.

The user is presented with the following:
  * Initial Investment Amount
  * Monthly Desposit(if any)
  * Annual Interest
  * Number of years

After the user inputs all of the needed values the program then calculats the yearly compounded values and
displays both how that money grew and its interest with a continuous monthly deposit and without a continuous
monthly deposit. This information is then displayed in a report like table that is easy to read, understand and
is user friendly. Whenever this report is done being displayed the program then asks the user if they would
like to continue and possibly change the initial input values or if they don't want to continue exit from the
program right then and there.

#### Problem & Solution
The problem that this program is aiming to solve has todo with the cumbersome calculations and math that need
be done by hand to see and understand how an investment might grow overtime. The way that this program
aims to solve this problem is by creating an easy to use and user friendly menu of options to input the desired
information and then have that information displayed back to the user via a report that is both easy to read
and understand while still being user friendly.

## Things That Went Well
The things that have been done particularly well within this program are the user interface and the easy to read
and understand codebase. With the two portions of this program split between both a "front end" and
"back end" any programmer should be able to discern how this program works without much thought.

## Improvements & Enhancements
#### Improvements
  * Unintended exit behavior which happens from time to time
    * This improvement would create better UX and allow for smoother program exit without the user
	thinking that they did something wrong.
  * Better thought into property and variable accessibility
    * This improvement would create more secure code so that the information is kept confidential
	and requires a specific way to access said information and isn't just accessible from anywhere.
  * More thought into resources needed
    * This improvement would allow for the program to run more efficient while taking up less resources
	from the computer.
#### Enhancements
  * User input validation that makes good use of exceptions and not a custom solution
    * This enhancement would stop the user from inputting a value that isn't of intended
	functionality while making that portion of code that utilizes an exception easily understood by
	letting know future developers of its vital importance.
  * Other types of investment functionality: Ex. daily, weekly, monthly reports
    * This enhancement would just further improve what this program is capable of and increase its
	capabilities and usefulness to those who'd use it.

## Challenges
  * The main challenge that I had while programming this project would have to be figuring out the correct
	interest calculation needed to show the correct information based upon the users inputs. While not having
	a great background in math this was the most difficult portion. I overcame this challenge while researching
	different interest calculations to have a better understanding how the calculation was being done and what
	inputs created the corrrect outcome.
  * Another challenge which I think was unique was that I had an idea to clear the screen after which the reports
	get made and the user continues using the program. There isn't necessarily an easy way to clear the console
	so, through some research I found that outputting the following string "\x1b[2J\x1b[H" is a special ANSI escape
	sequence to clear the console and move the cursor back to top left.

## Transferable Skills
While I may not be able to think of exactly every skill used to create this project here is my attempt to list the most important:
  * Flowchart: Plans, Organizes, and sequences program flow -> See flowchart.png
  * Industry Standard Best Practices: Commenting, Naming Conventions which enhance readability and maintainability
  * OOP: Object-Oriented Programming
  * C++
  * FrontEnd & BackEnd Practices
  * Documentation
  * Program creation from client requirements, standards, and specifications

## The Hows
  * How is this program maintainable?
    * By implementing industry standard best practices such as commenting the code base and being consistent with naming
	conventions throughout the codebase it becomes much easier to maintain, understand and allow for future developers
	to spend less time figuring out what things do and more time on the important tasks.
  * How is this program readable?
    * By implementing industry standard best practices such as being consistent with method, class, propery and variable
	naming conventions allow for developers to easily read the names of things and follow along easier without guessing
	what a method is doing or what data is being stored in a specific variable.
  * How is this program adaptable?
    * This program is adaptable by utilzing OOP or Object Oriented Programming to create objects that store and implement
	the intended functionality of the program and a developer just needs to understand which methods to use to achieve
	the final results they are wishing.
