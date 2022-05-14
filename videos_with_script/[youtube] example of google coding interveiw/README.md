[Music]

hi I'm Edgar and I'm a software engineer at Google

hi I'm Becky and I'm a software engineer at Google so Edgar the question 

I'm going to give you today is a I'm going to give you a collection of numbers and 

I need you to take this collection of numbers and find a matching pair that is equal to a sum that I give you as well

okay 

so for example the collection of numbers could be 1 2 3 & 9 and the sum that I'm looking for is 8 

okay 

and then another example just for another set of numbers could be a 1 a 2 a 4 and a 4 and then again is some that I'm looking for is 8 

so in this case there I guess what I'm trying to figure out is 

you're looking for a pair of numbers then that add up to 8 

yeah right 

so in this case there isn't a pair of numbers that add up to it 

that is true in this example 

ok and in this case it is because the 4 and 4 add up to 8 

correct 

okay so this is, this would be like no, and this is yes ok?

yes 

okay so how are these numbers given? can I assume that they're kind like in memory an array or something?

yeah they're in memory you can go with an array. you can also assume that they're ordered intending order 

ok, interesting okay 

so how about repeating elements can I assume that they would be like for instance here

what if I didn't have that 4?

could I use like the 4 and the 4 to get that 8?

you can't repeat the same element at the same index twice but certainly the same number may appear twice 

ok ok so like that would be would be I yes 

how about these numbers? are they integers or are they floating point or.. 

you can assume they'll always be integers

ok negatives positives?

negatives can happen 

ok cool 

so well, the first the simplest solution of course is just comparing every single possible pair. 

so I could just have two for loops, one scanning the whole thing and then the second one starting from 

let's say you have the I loop and then the J loop starting from I plus one 

so that I don't repeat the same value 

and just testing all of them if the sum is equal to the target sum 

I mean that's obviously not very efficient but that would be like a way to solve it 

that would work, it certainly would be time-consuming 

I think it is worse than optimic  solution 

so any kind of example that yeah 

yeah I think that would be quadratic 

so better than quadratic,

well since it's sorted it's okay 

I guess I need to figure out 

when I have a number what I'm looking for is 

if there's another number that the sum is to 8 

so if I have a 1, what I'd need to figure out is there's a 7 somewhere in the array 
 
and that's the case it's sorted then I can just do binary search

I guess if I go here and I binary search for a 7

then I go here and I binary search for a 6 

which is the complement of that and

when I go here I binary search for a 5

and at the end I just don't do anything

and so in this case I would solve it like that 

so that's a bit better than quadratic 

I guess binary search is log algorithm in a sorted list

also any answer  ok you're kind of slow

okay 

so what if you took a look at, instead of doing a binary search which

is unidirectional 

what if you started with a pair of nembers to begin with then work your way through in
 
work from there 

let's see so it's right

okay let me try to bound this thing so

the the largest possible sum I guess would be the last two values 

that would be a largest possible Sum yeah 

the smallest possible sum would be the two smallest right 

so anything in between, 

Wow okay so the range of the possible values is that right?

so there's nothing that is probably small,

there's nothing that can be smaller than this value

right 

there's nothing that can be larger than that value 

that's okay 

so if this sum is 10 in this case, 

it's too large so I need to find a smaller sum  

so I could just move this one over here 

and if that is too small now and 

I need to move that one over there 
 
okay so I think I can just do it with that in a linear solution 

just moving at each iteration I either move the high one lower if my pair is too large

and I move my lower higher if my pair is too small 

and I end whenever I either find two like in this case I need to find a pair that adds up to 8 or whenever they cross 

so every point I'm moving one of them 

so they would have to at least cross and 

I move exactly one so that means that it's

linear yeah so that 

that would be a way of solving that problem and 

how does it make that faster than a binary search 

okay so in the binary search case I was doing log or finding but I had to repeat that for every element that I was an N log N solution

in this case

I just need to do that moving scanning the one time so it's a linear solution so that's faster 

right okay

so before maybe you could get to coding it but we quit before we do that maybe

you could explain so if you explained it in a nonworking example maybe you have fallen through that same process and working 

okay yeah so here

I would start with this and that right
 so it's five is

smaller than eight so I move this one

here so that's six that's smaller than

eight so I go here and then that's eight

so that's true and I return excellent

yeah I think that would work okay so

what coding language would you prefer to

do is it um I preferred C++ if that's

okay works okay go for it ah perfect

let's see so okay now I realize that I

haven't figured out what I need to

return so do I want the pair the indices

of the pair or whether I just found it

or not so for the purposes of the

example we'll go with whether you're

founder or not but let's say you were

going to return the pair how could that

become a called moment okay there was no

hair so I mean building the pair would

be easy right so I would just return the

pair if I didn't find it then I would

need to return some sort of like boolean

so I guess I could make a data structure

that has a boolean that the notes

whether the pair is valid or not like

has has it been found like a like a bull

found and then a pair values or

something like that

rhinos together right now and then this

is the thing that you return I mean it's

not very elegant but it's workable

rather than going with a custom object

if you will this return of illumine okay

that thing about makes a lot easier yes

but it's good to know that you thought

about what might you might have to do

there is no viable goal mm-hmm okay so

let's just call it pass pair with some I

guess

and so I'm okay just receiving whatever

I would like to receive it as a vector

say vector is fine yeah sure

and we said ants are fine - fine

this is my data and then I have an int

which is my son okay so like I said I

want sort of an int Milo

which is zero then my high which is the

data size minus one and then what I'm

going to do is while these are well Milo

is strictly lower than my high okay as

soon as they are touching then I know

that I can't guarantee that they're

different so that that's where I should

stop okay money

well Milo is less than my high and this

also solves the problem of what happens

if this is empty because then if this is

empty this would be a minus one and then

that would be violated so I would never

enter and access any of the values so

that's that's fine so while low is less

than high I guess if my data at low plus

my data at high is the same as my target

my target which is called sum then I

have found it that's it that's my pair

and here's what I would construct that

pair if I needed to return it but let me

say for now I can just return true

now if this is larger than some and this

is lower than some so I think I'm better

than just doing it three times I'm just

going to store it in a in a variable

which is my s is that and then say if s

is my sum then return true okay I'm

talking right there okay excellent

solution I see what you're getting at

here but now I'm going to throw a little

wrench into the mix oh boy I can no

longer guarantee for you that the

numbers in this collection are sorted

okay so you have to think of a different

way just to pair them against each other

I mean it if the first thing I do is

just sort of course then I solve this

problem the same way right so that would

be still an N log n solution it would

which would be like the same as us that

the binary search as well but it's to

you one pretty long okay so you want

faster than that okay okay let's see so

if I go back to this idea okay so let me

erase this if I go back to this idea of

when I look at a number what I need to

figure out is if the complement is in

the rest the yeah the eight minus this

value right now in this case when I have

the one I need to figure out if seven is

in the rest okay if I cannot sort and

searching that will be linear so that's

not a very good idea but maybe I can do

it the other way around so I build it up

little by little and instead of just

sort of asking a blanket is there

anywhere I just ask have I seen it in

the past so for instance if I'm here

what I need to find out if I have seen

eight minus three have I seen five in

the past that would work you have to

store five or I guess it's the same but

I could be storing the complements and I

just ask have I seen

three as a compliment of anything of the

things before so like III insert a seven

when I see a one sure I insert a 65 co2

the compliment and then yes I insert the

compliment and then when I get here I

ask is the call is this the compliment

of anything I have seen my past night so

I can do I can use a data structure that

is very good for for lookups okay right

so I can do something like a hash table

which has like a constant time lookup

hash table though hash table do you need

a key in this case I guess I don't need

a by mean I just need the values that

the the elements I don't I don't

actually want to store any payload so

yeah I guess a hash set would be the

thing to do so I hash set all of the

compliments and then I look for them

I need to be careful though how am I

going to deal with the case of repeated

elements so I don't want to be able to

say oh I have a four yes of course I

have a four I'm done right if I have

this I have a four I'd have it so I'm

done that would be a wrong solution I

guess I need to be careful there so okay

okay okay so here's an idea I only look

for things so what I'm here I only look

for things that I have seen before so as

long as I check before I insert things

that should work and then when I add it

here this one will find that because

it's in the previous one so like I think

that works yeah um okay

okay very well so let's see so like I

was saying wool or Hoss pair

with some with my oh okay can I just

like my back no it's a Const vector and

data and then my end some okay so I need

a hash set so in C++ that's an unordered

set of integers still and I'm going to

call it complements well I don't want to

write compliments all the time so I'm

just going to call it comp and say these

are the compliments I seen whatever I

need to get the target some yeah and so

as I said I just need to be building it

up little by little so I do a for my int

value for each of the values in the data

mm-hmm I am going to first check and

then insert so if my complement so I

check if I have seen it first yeah and

if I have seen it so that means if it's

not in the end then that's it that

should be a return true because this

current element and something that I

have seen in the past add up to the sum

so obviously it depends on what I've

been inserting so that's what I'm going

to do here my compliments is going to be

inserting I I don't remember

I think it's add for an another set but

there's a there's something it's either

our or insert or something yeah so I add

not the value but the compliment like I

said so I do the sum minus value

I feel like I probably need to go

through an example that anyway to make

sure that this is correct but I think

that's it let me let me go through

through some examples to make sure yes

so okay so I have I have a set my

compliments is a set which starts empty

I'm going to run through both they're

kind of the same at the beginning so

that should be fine so I have nothing in

it for my first value which is a 1 I

don't find anything obviously and then I

add 8 minus 1 so I add a 7 here ok so

now I have a 7 then I go for the next

one to I look for whether there's a 2

there no there isn't but if I had had a

6 here adding the complement would have

find it too so that would that would be

good so that that makes sense ok the 7

is not there so I just add now the 6 and

here's where they start to diverge the

next case is I get a 3 have I seen a 3

no well I have I see the complement of a

3 no so I just shoving the 3 nice like

this component good point yeah and then

the last one no I have not there's no 9

here so it would correctly return false

right now what about the other one the

other case I get a 4 I have not seen the

complement of 4 so I put the 4 in ok

because it's 8 minus 4 is 4 and then

when I get to this one I have found it

so I correctly return true value is

equal to yeah yeah so the value would be

4 I look here in my compliments and I do

find it so I return true ok so that

works what happens with an empty the

empty one should never return true

because you don't have a pair so that's

fine if you have only one thing you

never would compare again so that's fine

so it seems like that that were

there is one issue this could underflow

so okay let's not worry about that so I

think this is this is a the right

solution so it's linear because I am

doing constant amount of work the lookup

is constant adding it's constant for a

another set and I do it for all of the

values in the input so that's linear and

the memory is I guess linear as well

because the worst case scenario I have

added all of them to the set would you

do anything differently here if there

were 10 million integers in this

collection okay so let's see so if the

input is large

does it still fit in memory or probably

not at this point okay so if it doesn't

fit in memory what I can do okay so B is

the range of these values limited in

some way okay my tía

okay okay okay so if this if my set fits

in memory but my whole input doesn't fit

in memory then I can just sort of

process it in chunks right i chunked it

and I just put it in a set my

accumulated my set if we can do it in

parallel then it's kind of the same

thing right so now you have multiple

computers each one particular processing

each bit of it of the input each one

producing a set of complements that this

bit has seen and we just sort of merge

them if we have enough computers really

yeah so the merging would be a bit

tricky because we want to make sure that

again we don't we don't sort of look for

the thing that we have put in so

I guess as long as each individual

computer is testing this in the right

order when we merge them now we can say

oh well those two are correctly so if I

have a four in one computer and

affording the other computer when I

merge them I would need to be careful

that that I reconcile them but other

than that I think that would be the only

consideration okay all right great job

[Music]

all right so just to recap that

interview I just want to go over a

couple of things that you that you

should be aware of when you're when

you're interviewing and some of the

things that Edgar did very well so the

first thing that he did was to ask for

clarification to the problem so if you

don't understand fully understand the

question please feel free to ask for

clarification or ask to have it repeated

you can write it down and you can write

it down verbatim if needs of you

whatever you need to do to get a

complete understanding of the questions

that's being asked I think some of his

clarification questions were could they

be negative numbers or floating-point

numbers and the answer to that really

does affect school outcomes code so it

was really great that he asked that

question another thing that he did is he

while he was going through his solution

even before he started writing code down

he thought out loud constantly

constantly thinking out loud is probably

the best thing you can do in the

interview because it gives the

interviewee the opportunity to see your

thought process and use that to possibly

course-correct you more towards the

question that they were asking or to to

feed off of that and ask you more

questions that might help you

demonstrate your knowledge even further

because you may have said something that

they can expand upon but in the very

least it's going to help you to work

that problem out and there's nothing

wrong with working at problem L with

somebody else it always needs to minds

are better than one

so please please think out loud another

thing that he did really great is he

thought through everything before he

started writing something down so we

thought about how we were going to do it

we actually went through two iterations

right the first thing the thing at the

top of his mind isn't wasn't the best

solution and it's not going to be the

best solution for anybody so think

through what you want to do and then you

might get challenged by the interviewer

to think better faster of quicker more

efficiently think through that solution

and then ultimately when you feel you

will feel like you're at a spot where

you can code it then you can start

coding it down on the screen

so that's another great thing to do

another thing that he did really well

that I would encourage everyone to do is

to test it test it in real time so I

gave him two example sets here he he had

something that you could test with if

your interviewer doesn't give you an

example please make one up

test test your solution does it work

doesn't bet and then think about edge

cases edge cases can be important so in

this case he thought about a peon in NZ

collection and he tested his logic with

an empty collection it was really nice

to see him thinking about those edge

cases and bringing them up in the air

view so yeah clarifications think out

loud talk the rib talk before you write

and then test your solution

[Music]

