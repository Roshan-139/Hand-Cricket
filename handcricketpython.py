import random

def bat(a):
    print("You scored",a,"runs!")
    global runs
    runs+=a
    print("Total score:",runs)
    print()

def bowl(x):
    print("Bot scores",x,"runs!")
    global runsO
    runsO+=x
    print("Total score:",runsO)
    print()

def commentry(b):
    if b==0:
        x=random.choice(("Great defense by the batsman!","That was a dot ball!","The ball passed very close to the stumps!"))
        print(x)
    elif b==1:
        x=random.choice(("That was very close to out!","Fast running between the wickets!","It seems non-striker is very eager to get strike!"))
        print(x)
    elif b==2:
        x=random.choice(("Batsman will keep the strike with himelf!","Good shot but only got two runs!","Good runing between the wickets!"))
        print(x)
    elif b==3:
        x=random.choice(("Bad fielding cost 3 runs to the team!","Batsman seems to be like a rocket while running!"))
        print(x)
    elif b==4:
        x=random.choice(("One bounce and a four!!","Batsman seems to be pretty confident!","So well timed shot which adds four runs in total score!"))
        print(x)
    elif b==5:
        print("That was a huge wide and wicketkeeper fails to catch it which cost them 5 runs!")
    elif b==6:
        x=random.choice(("A great shot by the batsman! The ball went above the boundary!!","The ball has crossed the stadium, it was such a massive shot!","After this six pressure is on bowler!"))
        print(x)

def commentryO(y):
    if y==0:
        print("Amazing bowling! Batsman missed the ball!")
    elif y==1:
        print("Good fielding, batsman could only score 1 run!")
    elif y==2:
        print("Nice bowl, but could not stop batsman from stealing 2 runs.")
    elif y==3:
        print("Bad fielding by the fielders, which cost the team 3 runs!")
    elif y==4:
        print("The batsman managed to find a wide gap between the fielders!")
    elif y==5:
        print("That was a huge wide and wicketkeeper fails to catch it which cost them 5 runs!")
    elif y==6:
        print("A very bad bowl, the batsman managed to deliver the ball outside the boundary!")
        

print('Welcome to hand cricket!')
print('Player has to enter a valid run(0,1,2,3,4,5,6) after every ball!')
name=input("Enter player's name:")
print()

runs=0
i=0
c=1
balls=0

while i!=c:
    print('Enter the run',name,' you want to score:')
    i=int(input())
    c = random.randint(0,6)
    if i in range (0,7):
        if i==c:
            print('You are out!')
            print()
            print("Player score:",runs)
            if balls!=0:
                print("Strike rate:",(runs/balls)*100)
                print()
            else:
                print("Strike rate:0")
                print()
            break
        else:
            commentry(i)
            bat(i)
            balls+=1
    else:
        print("Enter a valid run! (0,1,2,3,4,5,6)")
        print()

runsO=0
j=0
d=1

while j!=d:
    if runsO>runs:
        break
    print('Enter the run',name,' you want to bowl:')
    j=int(input())
    d = random.randint(0,6)
    if j in range (0,7):
        if j==d:
            print('Bot is out!')
            print()
            print("Bot score:",runsO)
            print()
            break
        else:
            commentryO(d)
            bowl(d)
    else:
        print("Enter a valid run! (0,1,2,3,4,5,6)")
        print()

if runs>runsO:
    print("Congratulations",name,"!!")
    print("You won the game!")
    print("""░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░█▀▀▀█░░░░░░░░░░
░░░░░░░░░░░░░░░░█▀░░░█░░░░░░░░░░
░░░░░░░░░░░░░░░█▀░░░░█░░░░░░░░░░
░░░░░░░░░░░░░░█▀░░░░░█░░░░░░░░░░
░░░░░░░░░░░░░█▀░░░░░░█░░░░░░░░░░
▄▄▄▄▄▄▄▄░░░▄█▀░░░░░░░▀▀▀▀▀▀█▄░░░
░░░░░░██▄▄█▀░░░░░░░░░░░░░░░░█░░░
▄▄▄▄▄▄██░░░░░░░░░░░░░░░░░░░░█░░░
████████░░░░░░░░░░░░░░░░░░░░█░░░
████████░░░░░░░░░░░░░░░░░░░░█░░░
████████░░░░░░░░░░░░░░░░░░░░█░░░
████████░░░░░░░░░░░░░░░░░░░░█░░░
████████▄▄▄▄▄░░░░░░░░░░░░░░░█░░░
████████░░░░░▀█▄▄▄▄▄▄▄▄▄▄▄▄▀░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░""")

else:
    print("Well played",name)
    print("But u lost...")
    print("""░░░░░░░░░░░░▄█▀▀██▀▀▀▀▀▀▀█▄░░░░░
░░░░░░░░░░▄▀░░░░█▄░▄▄▄███▀▀█▄░░░
░░░▄▀▀▀▀▀▀░░░░░░▄█▀▀░░░░░░░░▄█░░
░░░█░░░░░░░░░░░░▀█▄▄▄█▀▀▀▀▀▀▀▀█▄
░░░█░░░░░░░░░░░░░░█▀░░░░▄▄▄▄▄░▄█
░░░██░░░░░░░░░░░░░▀█▄█▀▀▀░░░░▀█▄
░░░░█░░░░░░░░░░░░░░▀█░░░░░░░░░░▀
░░░░█▄░░░░░░░░░░░░░░▀▀▀▀▀▀▀▀▀░░▄
░░░░░▀▀▀▀▀█▄░░░░░░░░░░░░░░░▄▄▄█▀
░░░░░░░░░░░▀█▄░░░░░░░██▀▀▀▀▀░░░░
░░░░░░░░░░░░░▀█▄░░░░░░█░░░░░░░░░
░░░░░░░░░░░░░░░▀█▄░░░░▀█░░░░░░░░
░░░░░░░░░░░░░░░░░▀▄░░░░▀█░░░░░░░
░░░░░░░░░░░░░░░░░░█▄░░░░▀█░░░░░░
░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░
░░░░░░░░░░░░░░░░░░░░▀▄▄▄▄▀░░░░░░""")
