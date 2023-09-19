# let-us-C
Sandbox where I learn C and try not to `segfault` and dump my core!

# Why C? 😱
C is *dangerously efficient* -- I love the absolute control that you get in one of the lowest languages you can code.
Also, unlike other languages *cough* C++ *cough* you have a small, well defined, well established language to write unsafe code in!
I find the syntax of C++ overwhelming and offputting personally compared to good ol' C, but to each his own.  I do appreCiate the fact
that C++ finally got lambdas (like any proper language should) -- but if there were awards for worst syntax -- yeah C++ takes the cake!

I mean really??
```cpp
template <class F, class... Args>
void for_each_arg(F f, Args&&... args) {
  [](...){}((f(std::forward<Args>(args)), 0)...);
}
```

PLUS! There's a cool little song about how awesome it is under the C! Sebastian take it away!
...Oh the irony of having a c**rust**acean singing this...
<center>
  
https://github.com/crosscripter/let-us-C/assets/315043/e5dc0855-48d0-411e-9ca0-a896f38adc15

</center>
