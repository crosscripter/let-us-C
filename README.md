# Let Us C

## Chapter 0x1

#### Generational Garabage (_Collection_)

```c
int main() { puts("C is awesome"); }
```

You finish reading my shirt, it's big, bold and brightly colored..and in.. Comic Sans?! You look up at me puzzled, our eyes lock (you creep)...`&&` I smile a `bit` knowing a good opportunity `when` I **C** one...and you'll soon `byte`. 
Silently inside you whisper to yourself...

"_Yeah right_", 

But with the Swift&trade;ness of an eagle 🦅, I murmur back 

"FACTS" 

You, taken aback by my ability to `read` your innermost thoughts, think to yourself

"How dare he question _my truth_, it's 2023!"

So now like ur mad **TRIGGERED**, so you clap back wit, 

"🤬 C's for **BOOMERS**!!"... 

But I got no `0xbeef` I'm just staring back at you -- eyes like dangling pointers... I'm not that `type`. Like a `pure` `function` you have no `effect` on me...

\*sigh\* __"it's time to `free` another"__ 

I walk up with `monad`s of steel and `assert`:

"You need to be set `free`"

#### OOPs Didn't **C** You There!

"🙄`Orly? </sarcasm>`", you reply in unbalanced snarkup and emojis 

**POV**: you qwik&trade;ly pack your **Java 21 For Dummies** book into the `car` on your way to college to learn "enterprise programming"

...but before you soar off into the sunset like a majestic eagle... you think smuggly "Pfff, I mean, get with the times bruh, three letters for u, **OOP** -- got dem `Builders` and `Factories` and `ReadonlySingletonFactoryBuilders` no cap!! 

It's the Right Way&copy; no cap! 

BTW it runs on **BILLIONS** of devices&trade;!! NO 🧢"

I just stare into your `internal` `static`, your `private` `dependency injection`, a `runtime reflection` of yourself. I `comment` a `multiline string`: 

"Your `stragety` is a `facade`. `sealed` and `final`. `this` is you, an `immutable` `proxy` of `self`... you've been `reduce`d, and `cast` into a `void`. `filter`ed all the `truthiness` and left `undefined`. A `Nullable<Maybe<Dev>>` `some` `typeof` `program`mer which is `type safe` and `implements` `super` powers by `volatile`  `class` hierarchies...but `memoize` this, not _everything is an object!_"

"You sir, are a `NULL` pointer which needs to be `address`ed"

Tears well up in my eyes 🥹... I cry out with a cry of a thousand eagles:

"You don't have to `out`right `box` up all your primitives and `delete` your `ref`erences that your `base` camps have taught you. It may feel `unsafe` but `try!`! `with` my help you can `finally` be `free` from `using` `every` `list` of rules that you `yield` to...`throw`ing them around `as` `if` they are just `true` and `then` `Promise` to `catch` yourself when you `break` one.  `goto` let us `continue` and `switch` `context`s, in `this` `case` let us `return` to **`C`**!", 

I plead earnestly, now on my knees like a crouching mother eagle.

You stare at me, my code poetry overclocking your CPU...not `<blink>`ing for a second, your `thread`s are all `lock`ed, you `await` a `response` ..

"uh hey dude, I mean... it's cool, code is code, I'm *multiparadigm*...no shame bro. IDC if ur...a procedural progra.."

I interrupt, like an ad on YouTube, 

```sh
$ sh
```

"I don't mean to `bash` you, but now I can **C** that things are `terminal`. `now()` you will **C** what a `real` language can `do`. `while` you still have the `time`..." 

I take you by the hand and we unconditionally `jmp` into an old, worn down `cpy` of **K&R** together, you _shudder_ as we dive deep into _manual memory management_ and _pointers_ and wait what do you meeeeean therrrrre `char arr[] = {'n','o',' ','s','t','r','i','n','g','s','?','\0'};` 


## Chapter 0x2

### Adventure `await`s
we `descend` slowly into the depths of the **C**

"I know what you've heard", I say, "but **C** is **awesome**"
_No_ I mean it! HE🏒🏒 Plain ole' 70's **C** is even awesome. And that was like 50 years ago! Such a small, concise and powerful language. You can write anything in **C**, and I do mean _anything_. Windows&trade; or Unix anyone? Heck, I bet you your fav language was written in some offshoot of **C**! 

"Ya but isn't **C** \*lowers voice and looks around for Rust devs\*... _unsafe_?" 

YEP! It's "efficiently dangerous" -- or is it "dangerously efficient"? Hmm...Sure, you can walk right off the end of a buffer and read into things ~~you're not meant to read~~ or hey! Yeah no problem, let me get you another `segfault` ...or maybe I'll just do you a favor and BLOW YOUR FOOT OFF...erm, yeah so with **C** things are erm great and super safe 🤫 FWIW if you're scared of any of that then you probably don't have enough experience to be safely wielding the sharp double edged sword that is **C** -- but like a toddler with a pen, let's get into trouble!! 👼

#### Braces and Semis FTW
The syntax of **C** has inspired so many other languages, like no fr MOST languages ...from Java to Java*Script* it is truly the "the test show: You ARE the father" of all programming languages.

In **C** everything is simple and cleary defined. (lol) As complex as the software built in **C** is, the language remains unambigious ...kinda, until you get into UB 😱 or "**U**ndefined **B**ehavior"! BUT hey just don't DO THAT and you'll be _fine_! 🤞

The whole `C-style` syntax is built on two basic principles: both of which Python thought it a great idea to drop...(btw it IS) statements end with semis `;` (or if your a JS dev ` `) and blocks of statements are surrounded by braces `{ ... }` (or for you PyDevs `:\n    `).

Por Ejemplo:

```C
#include <stdio.h>

int main()
{
    puts("You C...it's easy!");
}

```
    
Notice how on this line:
```C
    puts("You C...it's easy!"); // <-- SEMI! 🚛
 ```
we ended the line with a semi? No not the big truck with lotsa wheels silly.. that's a *semi* we are talking about the colons of the semi...wait? wat? 

\***clears throat after a big gulp of overpriced filtered water like a parched eagle in the midst of a vast desert**\*

SO That's how you'll end most lines in **C**, think of it as the period at the end of the weird @$$ sentence in the book of  **C**.

HEY and also notice that our `int main()` function is delimited by the squirrely braces 🐿️, to open the block we used `{` and likewise we used `}` to close the block, just like little tiny door handles awwww:

In case you're just NOT getting it here's a fancy ASCII art
explanation FOR FREE!

```C
{ // <-- OPEN THE BLOCK
    puts("You C...it's easy!");
} // <-- CLOSE THE BLOCK
```
Any block of code starts and ends with those braces!
And yes, before you comment  **bRaCeS Go On ThEiR OwN LiNe!**
**I KNOW** -- I'm tots team "same brace line", but _I'm writing for n00bs K?_

#### Preprocessor Pendantics
Ok, so what's with the `#include`?? you say...well that's the **C preprocessor**. Yeah yeah, I know it's a fancy word meaning something the reads and transforms your code before it
is compiled and runs.  It's actually really cool.

The preprocessor contains certain commands, not the least of which is `#include`.  This "includes" (see?) an entire file right where you put the include preprocessor command.  The file `stdio.h` is what we like to call a **header file** in **C**, it basically defines publically usable members of a module (more on that much later...) but essentially you can think of it copying and pasting "stdio.h" right into our file.
Wait, that's cool and all buuuut why do we need it again? Wow you're catching on!  Yeah so we need it because we used the amazing little function called `puts` it stands for "**p**ut **s**tring" and it simply takes some text and prints it out to our console window!  BUT you say, we didn't define `puts` anywhere?? Riiiight, because it's defined in "stdio.h" 😁 and _that's_ why we `#include`d it!

#### Friends Don't Let Friends Interpret
"Sweet -- how do I run this thing again?"
Yeah so in **C** you can't just _run_ your code (c'mon now we ain't not 'terpreted language! 🧙‍♂️) we look to the almighty **compiler**.  Oh yeah, wait -- what's a compiler?? Glad you asked.  A compiler is a program that _compiles_ our code. There. Satisfied?  Nah, didn't think so.  Okay let's carry on!

Yeah so don't go getting into flame wars about `gcc` vs `clang` ok?? (and yea none defendeth `MSVC` henceforth)
My recommendation, find a compiler buddy and stick to it for life! `gcc` is my solemate FWIW.  That's what I'll be a using for this here tutorial. 🧙‍♂️

Ok wizards, ready for the magic **C** compiler incantation? One which take our code and magically transform it into something that does what we said it should do??  Remember kids, **C** is really really complex and OLD so get ready for some real tough stuff &trade;...

```
$ gcc hello.c
```

Oh...well that wasn't so bad...at all! Yeah well i cheated a bit and left out some usual flags and stuff...mainly so that you would stick around, cause I kinda like you, but NOT like that! 👀 anyway... basically that's the gist of it.  You say "yo `gcc` I got this file, and it's a **C** file and well if you are free on Friday could you ...I don't know maybe ...compile this into an executable for me?? TY! 😘" and then like an eagle swooping down to capture prey, `gcc` does it's sweet thang and rips your C file to shreds and reassembles them (see what I did there? 😉) into an acktually useful program! **WOW!** `gcc` then leans in, real close and whispers "`a.out`"

### Did you like the story??
Wow I mean you ...you really stuck around and read all that?
Congratulations brogrammer. Mad props 2 u

SO anyway I've had waaaaay too much coffee
I'm going to go do something productive with my life.

\***Leaves the room**\*
You: sticking around (still)

\***Comes blazing back into the room**\*
Why ARE YOU STILL HERE??

\***Pretends to step away for a moment**\*

```
























































```

OMG You are **STILL** here aren't you?...okay fine.
Oh, what's that? You still want a proper README?

I'll give it a go

# Why C? 😱
C is *dangerously unsafe* and I LIKE IT! I love the absolute control that you get in one of the lowest languages you can code. It's
compact, concise, expressive and native -- what's not to like?  Oh yeah well you do have to manage all your memory and strings BUT STILL!

## But but what about C**++**??
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

SO yeah...No offense Bjarne but I'll keep C structs and pointers
...and you keep the `std namespaced virtual rvalue referenced move deconstructors` mkay?

"If it ain't broke, DONT FIX IT" -- Some Old Bro
_(that being said I love the new languages that are coming out like Rust and Zig and Nim etc. etc.)_

A N Y W A Y ...
vvvv---- Since you're such a fan here's a FREE GIFT! -----vvvv

There's a cool little song about how awesome it is under the C! Sebastian take it away!
...Oh the irony of having a c**rust**acean singing this...
<center>
  
https://github.com/crosscripter/let-us-C/assets/315043/e5dc0855-48d0-411e-9ca0-a896f38adc15

</center>

**OK FOR REAL THIS TIME, GOODBYE AND THANKS FOR READING!!!**
