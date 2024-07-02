-- version
DNC_VERSION = "v2.1"

-- skybox constants
E_MODEL_SKYBOX = smlua_model_util_get_id("dnc_skybox_geo")

SKYBOX_SCALE = 600
SKYBOX_DAY = 0
SKYBOX_SUNSET = 1
SKYBOX_NIGHT = 2

-- background constants
BACKGROUND_NIGHT = 10
BACKGROUND_SUNRISE = 11
BACKGROUND_SUNSET = 12
BACKGROUND_BELOW_CLOUDS_NIGHT = 13
BACKGROUND_BELOW_CLOUDS_SUNRISE = 14
BACKGROUND_BELOW_CLOUDS_SUNSET = 15

-- time constants
SECOND = 30 -- how many frames are in 1 second
MINUTE = SECOND * 60 -- how many frames are in 1 minutes

HOUR_SUNRISE_START = 4
HOUR_SUNRISE_END = 5
HOUR_SUNRISE_DURATION = HOUR_SUNRISE_END - HOUR_SUNRISE_START

HOUR_SUNSET_START = 19
HOUR_SUNSET_END = 20
HOUR_SUNSET_DURATION = HOUR_SUNSET_END - HOUR_SUNSET_START

HOUR_DAY_START = 6
HOUR_NIGHT_START = 21

REAL_MINUTE = 1 / 60

-- lighting direction constants
DIR_DARK = 0.6
DIR_BRIGHT = 1

-- fog intensity constants
FOG_INTENSITY_NORMAL = 1.0
FOG_INTENSITY_DENSE = 1.02

-- colors
COLOR_NIGHT           = { r = 90,  g = 100, b = 130 }
COLOR_AMBIENT_NIGHT   = { r = 60,  g = 70,  b = 110 }
COLOR_SUNRISE         = { r = 255, g = 250, b = 150 }
COLOR_AMBIENT_SUNRISE = { r = 200, g = 200, b = 255 }
COLOR_DAY             = { r = 255, g = 255, b = 255 }
COLOR_AMBIENT_DAY     = { r = 255, g = 255, b = 255 }
COLOR_SUNSET          = { r = 255, g = 140, b = 80  }
COLOR_AMBIENT_SUNSET  = { r = 255, g = 140, b = 160 }

FOG_COLOR_NIGHT = { r = 5, g = 5, b = 10 }

COLOR_DISPLAY_DARK   = { r = 48,  g = 90,  b = 200 }
COLOR_DISPLAY_BRIGHT = { r = 255, g = 255, b = 80  }

-- hook constants
DNC_HOOK_SET_LIGHTING_COLOR = 0
DNC_HOOK_SET_AMBIENT_LIGHTING_COLOR = 1
DNC_HOOK_SET_LIGHTING_DIR = 2
DNC_HOOK_SET_FOG_COLOR = 3
DNC_HOOK_SET_FOG_INTENSITY = 4
DNC_HOOK_SET_DISPLAY_TIME_COLOR = 5
DNC_HOOK_SET_DISPLAY_TIME_POS = 6
DNC_HOOK_DELETE_AT_DARK = 7
DNC_HOOK_SET_TIME = 8