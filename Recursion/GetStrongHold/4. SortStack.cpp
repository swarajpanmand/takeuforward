void pushInBottom(stack<int> &st , int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }
    
    if(st.top()<elem){
        st.push(elem);
        return;
    }
    
    int temp = st.top();
    st.pop();
    pushInBottom(st, elem);
    st.push(temp);
}
void sortSt(stack<int> &st){
    
    if(st.empty()) return;
    
    int temp = st.top();
    st.pop();
    sortSt(st);
    
    pushInBottom(st, temp);
    
}
void SortedStack :: sort()
{
   //Your code here
   sortSt(s);
}