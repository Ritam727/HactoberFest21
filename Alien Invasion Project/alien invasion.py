import sys

import pygame

from pygame.sprite import Group
        

from Settings import Settings
from game_stats import GameStats
from scoreboard import Scoreboard
from button import Button
from ship import Ship
from alien import Alien
import game_functions as gf

def run_game():
    #Initialise game and create a screen object
    pygame.init()
    ai_settings=Settings()
    screen = pygame.display.set_mode((ai_settings.screen_width,ai_settings.screen_height))
    pygame.display.set_caption("Alien Invasion")

    #Make a play button.
    play_button = Button(ai_settings, screen, "Play")

    #Create an instance to store game statistices and crerate a scoreboard
    stats = GameStats(ai_settings)
    sb = Scoreboard(ai_settings, screen, stats)

    #Set the backgruond color
    bg_color = (230,230,230)
    
    #Make a ship,a group to store bullets in,and a grou of aliens.
    ship = Ship(ai_settings, screen)
    bullets = Group()
    aliens = Group()

    #Create a fleet of aliens
    gf.create_fleet(ai_settings, screen, ship, aliens)


    #Start main loop fr the game

    while True:
        gf.check_events(ai_settings,screen,stats,sb,play_button,ship,aliens,bullets)
        if stats.game_active:
            ship.update()
            gf.update_bullets(ai_settings, screen, stats, sb, ship, aliens, bullets)
            gf.update_aliens(ai_settings, stats, screen, sb, ship, aliens, bullets)
            

        gf.update_screen(ai_settings, screen, stats, sb, ship, aliens, bullets, play_button)



run_game()