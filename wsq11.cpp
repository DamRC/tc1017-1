 #include <iostream>
 #include <string>
 #include <fstream> //to read files
 using namespace std;

 int find_bananas(string filename){
   int amount;
   for (int n=0; n<filename.size(); n++){
      // Remeber that for chars you use ' ' instead of " "
     if(filename[n]=='b'){
       if(filename[n+1]=='a'){
         if(filename[n+2]=='n'){
           if(filename[n+3]=='a'){
             if(filename[n+4]=='n'){
               if(filename[n+5]=='a'){
                 amount++;
               }
             }
           }
         }
       }
     }
   }
   return amount;
 }

 int main(){
   string line;
   string myfile;
   int count;

   fstream filename;
   filename.open("bananafile.txt");

   if (!filename.is_open()){
     cout << "Failure opening file." << endl;
     return 0;
   }

   // to check if it's reading the file
   // IMPORTANT TO ONLY USE ONE LOOP, BC IT'LL ONLY READ THE FIRST
  /* cout << "File check: " << endl;
   while (getline(filename, line)){
     cout << line << endl;
   }
   */

   while (getline(filename, line)){
     for(int n=0; n<line.size(); n++){
       //to convert all to lower case & make it easier to check
       if(isupper(line[n])){
        line[n] = tolower(line[n]);
        // cout << line[n] << " " << endl;
       }
     }
     count = count + find_bananas(line);
     //check if it's converting
     /*cout << line << endl;
     cout << "count: " << count << endl;
     */ // To check
   }

   cout << "We found " << count << " bananas!" << endl;
   return 0;
 }
