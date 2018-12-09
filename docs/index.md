# Foxbot Docs

These [docs](https://thecraftkid.github.com/vex-robot-2018) tell you everything
you need to know about building and maintaining Foxbot, the flagship robot of
Team DeeThreeTee.

## About
Foxbot is a robot built for the VEX Robotics Competition Turning Point
(2018-2019). This repository contains source code for all the versions of
Foxbot and documentation for building the robot and competing in matches.

## Table of Contents
- The [Architecture](./architecture.md) description outlines major robot systems.
- The [Competition Checklist](./comp-checklist.md) contains 
- The [Config](./config.md) doc defines Foxbot-specific robot configuration.
- The [Metagame](./metagame.md) doc details game knowledge and strategy.
- The [Workflow](./workflow.md) doc describes the way to develop the robot.

## Project Structure
- `docs`: Important project documentation
- `common`: Code common to Foxbot v1.x.x and v2.x.x
- `foxbot_legacy`: Code that runs the backup robot (v1.2.0)
- `foxbot_2_0_0`: Current primary source directory
- `lib`: Other project libraries, fetched using the initialization script