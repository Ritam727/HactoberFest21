class Settings():

    def __init__(self):
        """Initialisse the game's static settings."""
        self.screen_width = 800
        self.screen_height = 600
        self.bg_color = (0,0,0)


        #Ship settings
#        self.ship_speed_factor = 1.5
        self.ship_limit = 3

        #Bullet settings
#        self.bullet_speed_factor = 3
        self.bullet_width = 3
        self.bullet_height = 15
        self.bullet_color = 200,0,0
        self.bullets_allowed = 9

        #Alien settings
#        self.alien_speed_factor = 1
        self.fleet_drop_speed = 2

        #How quickly the game speeds up
        self.speedup_scale = 1.1
        #How quickly the alein point values increase
        self.score_scale = 1.5

        self.initialize_dynamic_settings()

        #fleet_direction of 1 represent right;-1 represent left.
        #self.fleet_direction = 1

    def initialize_dynamic_settings(self):
        """Initialize settings that change throughout the game."""
        self.ship_speed_factor = 1.5
        self.bullet_speed_factor = 3     
        self.alien_speed_factor = 1
        # fleet_direction of 1 represents right; -1 represents left.
        self.fleet_direction = 1

        #Scoreing
        self.alien_points = 50



    def increase_speed(self):
        """Increase speed settings and alien point values."""
        self.ship_speed_factor *= self.speedup_scale
        self.bullet_speed_factor *= self.speedup_scale
        self.alien_speed_factor *= self.speedup_scale

        self.alien_points = int(self.alien_points*self.score_scale)
       # print(self.alien_points)
