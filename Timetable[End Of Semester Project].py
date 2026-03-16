import time
import datetime
import winsound
class Lectures:
    def __init__(self,Day,Venue,Time):
        day = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
        if Day in day:
            self.Day = day[time.localtime().tm_wday]
        else:
            print("Enter a valid input")
        self.Venue = Venue
        


        self.Time = Time


    def display(self):
        print(f"{self.Day} - {self.Time} @ {self.Venue}")


    def set_reminder(self):
        day = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
        target_day = day.index(self.Day)
        while True:
            now = datetime.datetime.now()
            if now.weekday() == target_day and now.strftime("%H:%M") == self.Time:
                print(f"Reminder: Lecture @ {self.Venue} now!")
                winsound.Beep(2500, 10000)
                break
            time.sleep(1)

