# Converting Miles to Kilometers

# PROBLEM

Your summer surveying job requires you to study some maps that give distances in kilometres and some that use miles. You and your coworkers prefer to deal in metric measurements. Write a program that performs the necessary conversion.

# ANALYSIS

The first step in solving this problem is to determine what you are asked to do. You must convert from one system of measurement to another, but are you supposed to convert from kilometres to miles or vice versa? The problem states that you prefer to deal in metric measurements, so you must convert distance measurement in miles to kilometres. Therefore the problem input is **distant in miles**, and the problem output is **distance in kilometres**. To write the program, you need to know the relationship between miles and kilometres. Consulting a metric table shows that one mile equals to 1.609 kilometres.

The data requirements and the relevant formulas are listed below. Miles identifies the memory cells that will contain the problem input, and kms identify the memory cell that will contain the program result, or the program output.

## Data requirements

**Problem Input**

```miles    /*the distance in miles*/```

**Problem Output** 

```kms      /*the distance in kilometres*/```

**Relevant formula** 

```1 miles =  1.609 kilometers```

# DESIGN

Next, formulate the algorithm that solve the problem. Begin by listing the three major steps, or subproblems, of the algorithm

## Algorithm

1. Get the distance in miles.
2. Convert The distance in kilometres.
3. Display the distance in kilometres.

Now decide whether any step of the algorithm need further refinement or whether they are perfectly clear as stated. Step 1 (getting the data) and Step 3 (displaying a value) are basic steps and require no further refinement. Step 2 is fairly straightforward, but some detail might help:

**Step 2 Refinement**

2.1 The distance in kilometres is 1.609 times the distance in miles.

We list the complete algorithm with refinements below to show you how it all fits together. The algorithm resembles an outline for a term paper. The refinement of Step 2 is numbered as Step 2.1 and is indented under Step 2.

## Algorithm with Refinements

1. Get the distance in miles.
2. Convert The distance in kilometres.

    2.1 The distance in kilometres is 1.609 times the distance in miles.

3. Display the distance in kilometres.

Let's desk check the algorithm before going further. If Step 1 gets a distance of 10.0 miles, Step 2.1 would convert it to 1.609 x 10.00 or 16.09 kilometres. This correct result would be displayed by Step 3.

# IMPLEMENTATION

To implement the solution, you must write the algorithm as a C program. To do this, you must first tell the C compiler about the problem data requirements — that is, what memory cell names you are using and what kind of data will be stored in each memory cell. Next, convert each algorithm step into one or more C statements. If an algorithm step has been refined, you must convert the refinements, not the original step, into C statements.

# TESTING

How do you know the sample run is correct? You should always examine program results carefully to make sure that they make sense. In this run, a distance of 10.0 miles is converted to 16.09 kilometers, as it should be. To verify that the program works properly, enter a few more test values of miles. You don’t need to try more than a few test cases to verify that a simple program like this is correct.
