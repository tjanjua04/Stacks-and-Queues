#include <iostream>
#include <vector>
#include <algorithm>

class Stack {
public:
    void validPara(const std::string& expre) {
        std::vector<char> stack;
        for (char c : expre) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push_back(c);
            }
            else if (c == ')' || c == '}' || c == ']') {
                if (stack.empty() || !isMatching(stack.back(), c)) {
                    std::cout << "invalid" << std::endl;
                    return;
                }
                stack.pop_back();
            }
        }
        if (stack.empty()) {
            std::cout << "Valid" << std::endl;
        }
        else {
            std::cout << "Invalid" << std::endl;
        }
    }

    int indexError(const std::string& expre) {
        std::vector<int> stack;
        for (int i = 0; i < expre.length(); ++i) {
            if (expre[i] == '(' || expre[i] == '{' || expre[i] == '[') {
                stack.push_back(i);
            }
            else if (expre[i] == ')'|| expre[i] == '}' || expre[i] == ']') {
                if (!stack.empty()) {
                    stack.pop_back();
                }
                else {
                    return i;
                }
            }
        }
        return stack.empty() ? -1 : stack.front();
    }

    void minPara(const std::string& expre) {
        int openCount = 0;
        int closeCount = 0;
        for (char c : expre) {
            if (c == '(' || c == '{' || c == '[') {
                openCount++;                             
            }
            else if (c == ')' || c == '}' || c == ']') {
                if (openCount > 0) {
                    openCount--;
                }
                else {
                    closeCount++;
                }
            }
        }
        std::cout << openCount + closeCount << std::endl;
    }

    void scorePara(const std::string& expre) {
        int score = 0;
        std::vector<char> stack;
        for (char c : expre) {
            if (c == '(' || c == '{' || c == '[') { 
                stack.push_back(c);
            }
            else if (c == ')' || c == '}' || c == ']' && !stack.empty()) {
                stack.pop_back();
                score++;
            }
        }
        std::cout << score << std::endl;
    }

private:
    bool isMatching(char open, char close) {
        return (open == '(' && close == ')') ||
            (open == '{' && close == '}') ||
            (open == '[' && close == ']');
    }
};

class Queue {
private:
    std::vector<std::string> queue;

public:
    void enqueue(const std::string& chunk) {
        std::string reversedChunk = chunk;
        std::reverse(reversedChunk.begin(), reversedChunk.end());
        queue.push_back(reversedChunk);
    }

    void processMsg() {
        while (!queue.empty()) {
            std::string chunk = queue.front();
            queue.erase(queue.begin());
            std::reverse(chunk.begin(), chunk.end());
            std::cout << chunk << " ";
        }
        std::cout << std::endl;
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
s1.validPara("void function(std::string expre){if(expre){return 1;}else{return 0;}}");
s1.scorePara("void function(std::string expre){if(expre){return 1;}else{return 0;}}");
s1.validPara("void function(std::string expre){if(expre){return 1;}else{return 0;}");
s1.validPara("void function(std::string expre){if(expre){return 1;else{return 0;");
s1.minPara("void function(std::string expre){if(expre){return 1;else{return 0;");
std::cout<<s1.indexError("void function(std::string expre){if(expre){return 1;else{return 0;")<<std::endl;
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
q1.enqueue("I forgot my password and can't reset it. Help, please! Do you provide technical support for mobile devices?");
q1.processMsg();
q1.enqueue("The software update is causing issues on my computer. The response time on your website is very slow.");
q1.processMsg();
return 0;
}
