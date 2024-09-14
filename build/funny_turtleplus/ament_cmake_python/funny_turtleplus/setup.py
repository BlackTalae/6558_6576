from setuptools import find_packages
from setuptools import setup

setup(
    name='funny_turtleplus',
    version='0.0.0',
    packages=find_packages(
        include=('funny_turtleplus', 'funny_turtleplus.*')),
)
