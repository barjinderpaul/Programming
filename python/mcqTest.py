
#MCQ Test :
class mcqTest:
    def __init__(self,q_asked,answer):
        self.q_asked=q_asked
        self.answer=answer

#All questions with options
questions =[
    "What is this platform?\n(a)Inta\n(b)FB\n(c)LinkedIn\n\n",
    "What color are grapes?\n(a)Red\n(b)Green\n(c)Blue\n\n",
    "How many colors does rainbow has?\n(a)4\n(b)3\n(c)7\n\n"
]

#correct questions with answers with class objects
results = [
    mcqTest(questions[0],"a"),
    mcqTest(questions[1],"b"),
    mcqTest(questions[2],"c")
]

#function to calculate score
def run_test(qq):
    score=0
    for question in qq:
        answer = input(question.q_asked)
        if answer == question.answer:
            score+=1
    print("You score ",score,"/",len(qq),"correct ")

run_test(results)