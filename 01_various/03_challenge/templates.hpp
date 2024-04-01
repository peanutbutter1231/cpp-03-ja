template<typename... Args>
bool allTrue(Args... args){
    return (... && args);
}
