#include<string.h>
#include<iostream>
#include<cstring>
using namespace std;
// void my_strCat(char x1[],char x2[]){
//   size_t len1 = strlen(x1);
//   size_t len2 = strlen(x2);
//   for (int i = len1; i < len1+len2; i++)
//   {
//         x1[i]=x2[i-len1];
        
//   }
//   x1[len1+len2]='\0';
//   // cout<<x1;
  
  

// }
// int my_strLen(char x[]){
//   int dem = 0;
//    while (x[dem]!='\0')
//    {
//      dem++;
//    }
//    return dem++;

// }
// int my_strCpy(char x1[],char x2[] ){
//       size_t len2 = strlen(x2);
//       for (int i = 0; i <len2; i++)
//       {
//         x1[i]=x2[i];
//       }
//       x1[len2]='\0';
      


// }
// int main(){
  
//   char s1[100]="XIN CHAO ";
//   char s2[100]="TOI LA SON ";
//   // fgets(s1,sizeof(s1),stdin);
//   // fgets(s2,sizeof(s2),stdin);
  
//   my_strCat(s1,s2);
//   cout<<s1;
//   cout<<"\nSo ki tu la : "<<my_strLen(s1);
//   my_strCpy(s1,s2);
//   cout<<"\n"<<s1;
//   cout<<"\n"<<s2;
  
  
  


// }

  
void my_strCpy(char x[],char x1[]){
        size_t len2 = strlen(x1);
        for (int i = 0; i < len2; i++)
        {
           x[i]=x1[i];
        }
        x[len2]='\0';
        

}
 int my_strLen(char x[]){
     int dem = 0;
     while(x[dem]!='\0')
         dem++;
     return dem++;
    

 }
  void my_strCat(char x[],char x1[]){
    size_t len1 = strlen(x);
    size_t len2 = strlen(x1);
    for (int i = len1; i < len1 + len2; i++)
    {
          x[i]=x1[i-len1];
    }
    x[len1+len2]='\0';




  }
  void upperCase(char x[]){
    for (int i = 0; i <strlen(x); i++)
    {
        if(x[i]>= 'a' && x[i]<= 'z'){
            x[i]+=-32;
        }
    }
    
    


  }
  void chuyenDoi(char x[]){
    for (int i = 0; i < strlen(x); i++)
    {
           if((i==0) || (i>0 && x[i-1]==32) ){
               if(x[i]>='a' && x[i]<='z')
                  x[i]+= -32;
             
 
        }else{
            if (x[i] >= 'A' && x[i] <= 'Z')
            {
               x[i]+=32;
            }
            
        }
    }
    




  }
  int main(){
     char x[100];
     fgets(x,sizeof(x),stdin);
     cout<<x<<endl;
     chuyenDoi(x);
     cout<<x;




  }

// int main(){

    // char x[100];
    // char x2[100] ;
    // gets(x);
    // gets(x2);
    // my_strCat(x,x2);
    // cout<<x<<endl;
    // cout<<x2<<endl;
    // upperCase(x);
    // upperCase(x2);
    // cout<<x<<endl;
    // cout<<x2;
//    cout<<"\nChuoi sau khi noi la: "<<x;
//    my_strCpy(x2,x);
//    cout<<"\n---------"<<endl;
//    cout<<x<<endl;
//    cout<<x2;
   
   //    cout<<"Do dai cua chuoi vua nhap la "<<my_strLen(x);

// }


