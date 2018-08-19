# setup_v0.py
from setuptools import setup, Extension

flags = ['-Wall', '-Wextra', '-Wno-missing-field-initializers']
extension = Extension(
    name='hello',
    sources=['hello_v0.c'],
    extra_compile_args=flags
)

setup(name="hello", ext_modules=[extension])
