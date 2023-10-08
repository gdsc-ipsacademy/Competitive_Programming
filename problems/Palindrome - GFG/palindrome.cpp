<textarea spellcheck="false" wrap="off"></textarea>


31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54





 


 
 


publicStringis_palindrome(intn)
{
inttemp=n;
intrev=0;
if(n<10){
return"Yes";
}
while(n!=0){
intrem=n%10;
rev=(rev*10)+rem;
n=n/10;
 
}
if(temp==rev) {
return"Yes";
}
return"No";}
 
publicstaticvoidmain (String[] args){
Stringx=newSolution().is_palindrome(567);
System.out.println(x);
}
 
}

 

 




 


 
 

