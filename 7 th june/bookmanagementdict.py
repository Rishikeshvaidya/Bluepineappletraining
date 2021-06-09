bookinfo={}
def searchbook(search_id):
    if search_id in bookinfo.keys():
        return bookinfo[search_id]
    else:
        return None
value=True
while value :
    print("\n1.Insert Book\n2.list all books\n3.delete book\n4.search book [by id]\n5.exit")
    ch=int(input("Enter Your Choice"))
    if ch==1:
        book_id=int(input("\n Enter Id of Book:"))
        book_cost=float(input("\n Enter cost of Book:"))
        book_author=input("\n Enter author of book:")
        bookinfo[book_id]=[book_cost,book_author]
    elif ch==2:
        print("\n")
        for key,value in bookinfo.items():
            print("Book Id:{}".format(key))
            print("Book Cost:{}".format(value[0]))
            print("Book Author:{}".format(value[1]))
            print("\n")
    elif ch==3:
            print("\n Enter id of book u want to delete:") 
            delete_id=int(input())
            if delete_id in bookinfo.keys():
                bookinfo.pop(delete_id)
                print("\n Deleted Successfully!!")
            else:
                print("\n Book Not found so deletion not done")
    elif ch==4:
            print("\n Enter id of book u want to search:") 
            search_id=int(input())
            searchresult=searchbook(search_id)
            if searchresult==None:
                print("\n Book Not found")
            else:
                print("\n Book found Successfully")
                print("Book Id:{}".format(search_id))
                print("Book Cost:{}".format(searchresult[0]))
                print("Book Author:{}".format(searchresult[1]))
                
               
    else:
        value=False



