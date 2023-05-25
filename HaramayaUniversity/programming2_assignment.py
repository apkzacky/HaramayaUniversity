#
# Coded by Zacky Jamel on 2022 November 11 

## If Bug found contact on: zackyjamel@gmail.com

"""
- Note that

Every function in here is called, to access each question, cut the question you wanna execute (run), then past to new python file 
--
OR you can comment all called functions, rather you don't comment the question you wanna execute.

    # have nice coffee, All the best guys
"""


#1 => question number 1

def function1():
    input_string = input("Enter a list element separated by space ")
    list = input_string.split()
    print(f"Elements are: {list}")

function1()     # function calling

def function2():
    input_string = input("Enter a list element separated by space ")
    list = input_string.split()
    print(f"Elements are: {list}")

function2()     # function calling



#2 => question number 2


def numberSum():
    list = (8, 2, 3, 0, 7)
    result = 0
    for items in list:
        result += items
    print(result)

numberSum()     # function calling


#3 => question number 3

def readFile():
    list = []
    
    with open('./file.txt', 'r') as file:       # assuming 'file.txt' is in the current folder
        for text in file:
            list = [text]
            print(list)


readFile()      # function calling


#4 => question number 4


def string_test(s):

    a = { 'Lower_Case':0 , 'Upper_Case':0} 
    for ch in s: 
       if(ch.islower()): 
          a['Lower_Case'] = a['Lower_Case'] + 1
       elif(ch.isupper()):
          a['Upper_Case'] = a ['Upper_Case'] + 1
       else:
          pass

    print('No. of Upper case characters : ', a['Upper_Case'])
    print('No. of Lower case Characters : ',a['Lower_Case'])


string_test('The quick Brow Fox')       # function calling



#5 => question number 5



with open('./file.txt','r') as f:       # assuming 'file.txt' is in the current folder
	print(f.closed)
	f.close()
	print(f.closed)



#6 => question number 6


with open('./abc.txt') as file1, open('./file.txt') as file2:
    for line1, line2 in zip(file1, file2):
        # line1 is from abc.txt, and line2 is from file.txt
        print(line1+line2)




#7 => question number 7




def middle_char(txt):   # function about doing middle charecter algorith.. 
      return txt[(len(txt)-1)//2:(len(txt)+2)//2]

text = "Python"
print(middle_char(text))
text = "PHP"
print(middle_char(text))
text = "Java"
print(middle_char(text))



#8 => question number 8

def sampleList(list):
    unique_list = []
    for items in list:
        if items not in unique_list:
            unique_list.append(items)
    print(unique_list)

sampleList([1, 2, 3, 3, 3, 3, 4, 5])  # function calling





#9 => question number 9


def string_test(s):

    a = { 'Lower_Case':0 , 'Upper_Case':0} 
    for ch in s: 
       if(ch.islower()): 
          a['Lower_Case'] = a['Lower_Case'] + 1
       elif(ch.isupper()):
          a['Upper_Case'] = a ['Upper_Case'] + 1
       else:
          pass

    print('No. of Upper case characters : ', a['Upper_Case'])
    print('No. of Lower case Characters : ',a['Lower_Case'])

string_test('The quick Brow Fox')       # function calling





#10 => question number 10


def readContentFile():

    with open('./software.txt', 'r') as file:   # assuming 'software.txt' is in the current folder
        for contents in file:
            print(contents)
readContentFile()   # function calling


