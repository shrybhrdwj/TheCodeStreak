#Creating a tuple
Tuple=("Python","Data","Structure","Tutorial")
print("The Created Tuple is:")
print(Tuple)

#Create a tuple using a list
#list=[3,6,7,9,5,2]
#print("Tuple using a list:")
#Tuple=tuple(list)
#print(Tuple)

#Accessing using indices
print("Single Element:",Tuple[1])
print("Multiple Element(Slicing):",Tuple[0:2])

#Negative Indexing
print("Last Element:",Tuple[-1])
print("Last two elements:",Tuple[-1:-3:-1])

#Modify Tuple
try:
    Tuple[1]="Tuple"
    print(Tuple)
except Exception as e:
    print("Exception raised:",e)
