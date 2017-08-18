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

## Question7

**Which of the following is the correct output for the program given below?**
```
p 100.downto(90).select{|x| x%2==0}
```
* A. [100,99,98,97,96,95,94,93,92,91,90]
* B. [90,92,94,96,98,100]
* C. [100,98,96,94,92,90]
* D. []

**Ans: C**

## Question8

**Which of the following can be inserted into __(1)__ in order for the given**
**code to generate the output below? (Choose two.)**
```
p [1,1,2,3,5,8].__(1)__｛|x| x*2}
[output]
[2,2,4,6,10,16]
```
* A. compact
* B. collect
* C. map
* D. flatten
* E. join

**Ans: B & C**

## Question9
**Which of the following is the correct output for the program given below ?**
```puts "Ruby on Rails".delete("Rails")
```
* B. Ruby on
* C. Rails
* D. uby on
* E. Ruby

**Ans: D**

## Question10
**An error occurred while trying to create a string using a here document.**
**Which of the following solutions are appropriate? (Choose two.)**
```
doc = <<EOF
 The quick brown fox
 jumps over the lazy dog
 EOF
```
* A. Replace the first <<EOF with <<-EOF.
* B. Replace the last EOF with >>EOF.
* C. Remove the whitespace in front of the last EOF.
* D. Replace the first <<EOF with << EOF.

**Ans: A & C**

## Question11
**Which of the following can be inserted into __(1)__ in order for the given**
**code to generate the output below?**
```
h = {1=>2, 3=>4}
h.__(1)__
p h #=>{}
ary = [1, 2]
ary.__(1)__
p ary #=>[]
```
* A. clear
* B. remove
* C. destroy
* D. empty?

**Ans: A**

## Question12
**Which of the following can be inserted into __(1)__ in order for the given**
**code to generate the output below? (Choose two.)**
```
a = [1,2,3,4,5]
p __(1)__ #=>[1,2,3]
```

* A. a[0..2]
* B. a[1..2]
* C. a.slice(0,3)
* D. a.slice(0...2)
**Ans: C**

## Question13
**Which of the following is the correct output for the program given below?**
```
str = "RubyAssociation".chomp
```
* A. "RubyAssociation\r"
* B. "RubyAssociation"
* C. "RubyAssociation\r\n"
* D. "RubyAssociation\r\n\r\n"

**Ans: B**

## Question14
**Which of the following is the correct output** for the program given below ?**
```
str = "RubyAssociation\r\n".chop
```
* A. "RubyAssociation"
* B. "RubyAssociation\r"
* C. "RubyAssociation\r\n"
* D. "RubyAssociation\r\n\r\n"

**Ans: A**

## Question15
**Which of the following is a correct statement about io.rewind?**

```
File.open("foo.txt","r") do |io|
 puts io.gets
 puts io.read
 io.rewind
 p lines = io.readlines
end
```
* A. Return a string describing this IO object.
* B. Positions ios to the beginning of input, resetting lineno to zero.
* C. Returns true if ios is associated with a terminal device (tty), false otherwise.
* D. Returns an integer representing the numeric file descriptor for ios.

**Ans: A**