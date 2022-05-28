import requests
import csv
from bs4 import BeautifulSoup

url = "https://www.gov.uk/search/news-and-communications"
en_tete = ["titre", "description"]

page = requests.get(url)
soup = BeautifulSoup(page.content, 'html.parser')
titres = soup.find_all("a", class_="gem-c-document-list__item-title")
descriptions = soup.find_all("p", class_="gem-c-document-list__item-description")
with open("data.csv","w") as fichier_csv:
    writer = csv.writer(fichier_csv, delimiter=",")
    writer.writerow(en_tete)
    for i in range(len(titres)):
        writer.writerow([titres[i].string, descriptions[i].string])