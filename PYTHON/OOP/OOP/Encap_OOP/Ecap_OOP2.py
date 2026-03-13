class ScoreBoard:
    def __init__(UID,points):
        UID.__points = points
    
    def get_score(UID):
        return UID.__points

User1 = ScoreBoard(0)
print(User1.get_score())