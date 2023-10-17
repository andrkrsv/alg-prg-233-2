#include <iostream>
#include <string>
#include <stack>

bool cifra(char elem) {
    return elem >= '0' && elem <= '9';
}

void ReString(std::stack<char>& stack, std::string& output) {
    while (stack.top() != '(' && !stack.empty()) {
        output += " " + std::string(1, stack.top());
        stack.pop();
    }
    stack.pop();
}

int prioretet(char elem) {
    if (elem == '^') return 3;
    else if (elem == '/' || elem == '*' || elem =='%') return 2;
    else if (elem == '-' || elem == '+') return 1;
    return 0;
}

bool znak(char elem) {
    return elem == '+' || elem == '-' || elem == '*' || elem == '/' || elem == '%'||elem=='^';
}

int main() {

    std::string expression;

    std::cin >> expression;
    std::string output = "";
    std::stack<char> stack;
    for (char& elem : expression) {
        std::string temp(1, elem);
        if (temp == "(") stack.push('(');
        else if (temp == ")") ReString(stack, output);
        else if (znak(elem)) {
            output += " ";
            while (!stack.empty() && prioretet(elem) <= prioretet(stack.top())) {
                if (elem == stack.top() && elem == '^') break;

                output +=  std::string(1, stack.top())+" ";
                stack.pop();
            }
            stack.push(elem);
        }
        else if (cifra(elem)) {
            output += std::string(1, elem);
        }
    }
    std::cout << output << " ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
}
