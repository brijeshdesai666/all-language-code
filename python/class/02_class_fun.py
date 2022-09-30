class employ:
    company = "google"
    language = "python"

    def hello(self,age):
        print(f"hello, {age} {self.company}")

brijesh = employ()
vamika = employ()
brijesh.company = "youtube"
employ.language = "java"
print(brijesh.company)
print(vamika.company)
print(brijesh.language)
print(vamika.language)
brijesh.hello(26) # same as {employ.hello(brijesh)}