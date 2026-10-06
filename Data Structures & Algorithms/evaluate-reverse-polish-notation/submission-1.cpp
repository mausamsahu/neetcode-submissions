class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(string token : tokens){
            if (token != "+" && token != "-" &&
                token != "*" && token != "/") {

                st.push(stoi(token));
            }

            else{
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();

                int result;
                if(token == "+"){
                    result = first + second;
                }
                else if(token == "*"){
                    result = first * second;
                }
                else if(token == "-"){
                    result = first - second;
                }
                else{
                    result = first / second;
                }
        st.push(result);

            }
        }
    return st.top();

    }

};
