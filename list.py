#Creating a list
List=["Python","Data","Structure","Tutorial"]
print("The Created Python list is:")
print(List)

#Creating a multidimentional list
ListM=[["Python","Data"],["structure","Tutorial"]]
print("The Multi-Dimentional list is:")
print(ListM)

print("Single element:",List[1])
print("Multiple Element(Slicing):",List[0:2])
print("For nested list:",ListM[1][0])

#Negative Indexing
print("Last Element:",List[-1])
print("Last two elements:",List[-1:-3:-1])
