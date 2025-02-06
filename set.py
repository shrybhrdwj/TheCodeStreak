#Creating a set
Set={"Python","Shreya","Singh","Tutorial"}
print("The Created Set is:")
print(Set)

#Accessing the element
for ind, i in enumerate(Set):
    print(ind,i)

#finding the intersection of two sets
New_Set={1,2,"Shreya","Singh"}
print("Intersection:",Set.intersection(New_Set))

#Union of Sets
print("Union:",Set.union(New_Set))
