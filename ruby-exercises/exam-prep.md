### Ruby Association certified Ruby programmer silver version 2.1 prep test

## Question1

**Which of the following are NOT reserved words in Ruby? (Choose two.)**
* A. super
* B. begin
* C. try
* D. goto
* E. alias

**Ans: C & D**

## Question2

**Which of the following is the correct output for the program given below?**
```
def foo (a, *b)
  p a
end
foo(1,2,3,4)
```
* A. nil
* B. 1
* C. An error has occurred.
* D. []
* E. [1]

**Ans: B**

## Question3

**Which of the following is the correct output for the program given below?**
```
puts({"members" => 193, "year" => 2014}.size)
```
* A. 15
* B. 6
* C. 4
* D. 2

**Ans: D**

## Question4

**Which of the following is the correct output for the program given below?**
```
t = Time.now + (60*60*24)
p t
```
* A. current system time
* B. current system time + a day later
* C. An error has occurred.
* D. nil

**Ans: B**

## Question5

**Which variable names are valid as local variables? (Choose three.)**

* A. _365
* B. z
* C. 7years
* D. break
* E. latitude

**Ans: A, B, E (local variables can't start with a number and break is a reserved word)**

## Question6

**Which of the following is the correct output for the program given below?**
```
(5..8).each_with_index do |val,i|
puts "#{i} #{val}"
end
```
```
* A. 1 5
     2 6
     3 7
     4 8

* B. 0 5
     1 6
     2 7
     3 8


* C. 5 1
     6 2
     7 3
     8 4

* D  5 0
     6 1
     7 2
     8 3

* E. an error has occurred.
```

**Ans: B**