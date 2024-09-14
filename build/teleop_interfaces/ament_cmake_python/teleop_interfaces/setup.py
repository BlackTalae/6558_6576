from setuptools import find_packages
from setuptools import setup

setup(
    name='teleop_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('teleop_interfaces', 'teleop_interfaces.*')),
)
