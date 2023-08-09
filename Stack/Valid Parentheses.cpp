bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>st;

    for(int i=0;i<s.size();i++){

        if(s[i] == '(' || s[i] == '{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if (!st.empty()) {

              if (s[i] == ')' && st.top() == '(' ||
                  s[i] == '}' && st.top() == '{' ||
                  s[i] == ']' && st.top() == '['){
                      st.pop();
                  }
                  else{
                      return false;
                  }
            }
            else{
                return false;
            }
        }
    }
    
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
