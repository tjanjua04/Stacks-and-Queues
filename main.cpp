#include<iostream>
#include<string>

// Add class Stack here
class Stack
{
  void validPara(string expression)
  {
    //It will determine whether all parenthesis are completed or something is missing.
     

    //It will print valid if all are completed otherwise it will print invalid. 
    if(/* the amount of ( and/or [ are equal to the number of ) and/or ] */)
    {
        std::cout << "Valid" << std::endl;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }

    //It will take one string parameter that is an expression.
  }
  void indexError(string expression)
  {
    //It will find out the first index where the actual error occurred which is invalid parentheses.
    // It will take one string parameter that is an expression. 
    // It will return the first index of unbalanced parenthesis. 
    return expression[0];
    //Return -1 if all parenthesis are completed.
    if(/* all parenthesis are completed */)
    {
      string ex = "-1";
      return ex;
    }

  }
  void minPara()
  {
    //It will determine how many parenthesis are needed to make a string of code as a valid parenthesis string.
    // It will take one string parameter that is an expression. 
    //It will print how many minimum parentheses are required to make the string balanced. 
  }
  void scorePara()
  {
    //It will calculate how many valid parentheses are present in the given string. 
    //It will take one string parameter that is an expression. 
    //It will print how many balanced parentheses are present in the string.
  }
};
// Add class Queue here
class Queue
{
  void enqueue()
  {
    //It will divide the entire message into chunks (new string) of 8 characters and insert it into the queue.
    // Before insertion it will reverse the character of the chunk using the reverse function. 
    //It will take a string as a parameter. 
  }
  void processMsg()
  {
    //It will remove the chunk from the queue one by one until the queue is not empty. 
    //Then it will be reversed and the entire message will be formed. 
    //Display the entire message in this function. 
  }
};


int main(){
Stack s1;
s1.validPara("(([]))");
s1.minPara("(([]))");
s1.scorePara("(([]))");
s1.validPara("(([])");
std::cout<<s1.indexError("(([))")<<std::endl;
s1.minPara("(([])");
s1.validPara("(([{}))");
std::cout<<s1.indexError("(([[}])")<<std::endl;
s1.minPara("(([{}))");
s1.scorePara("(([{}))");
std::cout<<s1.indexError("({}[]()[)")<<std::endl;
s1.validPara("(([))");
s1.minPara("(([))");
std::cout<<s1.indexError("[({)]")<<std::endl;
s1.validPara("(([{[{({})}]}]))");
s1.minPara("(([{[{({})}]}]))");
s1.scorePara("(([{[{({})}]}]))");
s1.validPara("(([[{[{({})}]))");
s1.validPara("(([[{[{({})}]}])]))");
s1.scorePara("(([[{[{({})}]}])]))");
std::cout<<s1.indexError("(([[{{({})]}])]))")<<std::endl;
s1.validPara("(())");
s1.validPara("(())");
s1.validPara("void function(){}");
s1.scorePara("void function(){}");
s1.validPara("void function(");
s1.minPara("void function(");
s1.validPara("void function(std::string expre){if(expre){return 1;}else{return
0;}}");
s1.scorePara("void function(std::string expre){if(expre){return 1;}else{return
0;}}");
s1.validPara("void function(std::string expre){if(expre){return 1;}else{return
0;}");
s1.validPara("void function(std::string expre){if(expre){return 1;else{return 0;");
s1.minPara("void function(std::string expre){if(expre){return 1;else{return 0;");
std::cout<<s1.indexError("void function(std::string expre){if(expre){return
1;else{return 0;")<<std::endl;
Queue q1;
q1.enqueue("This is a secure message.");
q1.processMsg();
q1.enqueue("The product I received is damaged. What should I do?");
q1.processMsg();
q1.enqueue("I need assistance with setting up my new device");
q1.processMsg();
q1.enqueue("The website is not loading properly on my browser.");
q1.processMsg();
q1.enqueue("I accidentally placed the wrong order. Can it be canceled?");
q1.processMsg();
q1.enqueue("This is your project3. Have a happy thanksgiving!!! Hahaha");
q1.processMsg();
q1.enqueue("I forgot my password and can't reset it. Help, please! Do you provide
technical support for mobile devices?");
q1.processMsg();
q1.enqueue("The software update is causing issues on my computer. The response time
on your website is very slow.");
q1.processMsg();
return 0;
}
