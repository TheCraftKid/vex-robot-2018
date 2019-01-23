# Foxbot Docs

These [docs](https://williecubed.github.io/vex-foxbot) tell you everything
you need to know about building and maintaining Foxbot, the flagship robot of
Team DeeThreeTee.

## About
Foxbot is a robot built for the VEX Robotics Competition Turning Point
(2018-2019). This repository contains source code for all the versions of
Foxbot and documentation for building the robot and competing in matches.

## Table of Contents
- The [Architecture](./architecture.md) description outlines major robot systems.
- The [Competition Checklist](./comp-checklist.md) contains instructions for
  preparing for VEX competitions.
- The [Config](./config.md) doc defines Foxbot-specific robot configuration.
- The [Metagame](./metagame.md) doc details game knowledge and strategy.
- The [Workflow](./workflow.md) doc describes the way to develop the robot.

## Project Structure
- `docs`: Important project documentation
- `include`: External header files and libraries
- `src`: Source code for Foxbot
  - `common`: Resources used for Foxbot v1 and v2
  - `main`: The primary source directory
    - `v1`: Source code specific to Foxbot v1
    - `v2`: Source code specific to Foxbot v2
- `lib`: Other project libraries, fetched using the initialization script