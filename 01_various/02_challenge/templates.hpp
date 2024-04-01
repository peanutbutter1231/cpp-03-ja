template<typename... Args>
int sum(Args... args){ return (args + ...); };
