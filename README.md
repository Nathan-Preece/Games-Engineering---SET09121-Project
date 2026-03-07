# Games-Engineering---SET09121-Project
Coursework for the module Games Engineering SET09121

A wave-based action game where players battle against escalating hordes of monsters, gaining rewards and strengthening their character for deeper progression.

### Group Members:
- **Nathan Preece (Scrum Master)**
- **Rhys Young**
- **Euan Tennant**

---

## Project Status
- **Main Build**: ![Main Workflow Status](https://github.com/rereversed/set09120-rogues/actions/workflows/main.yml/badge.svg)
- **Develop Branch**: ![Develop Workflow Status](https://github.com/rereversed/set09120-rogues/actions/workflows/develop.yml/badge.svg)

## License
- This project is licensed under [MIT License](LICENSE).

## Release
- View the latest releases in the [Releases](https://github.com/rereversed/set09120-rogues/releases) section.

---

## Development Workflow

### Branching Strategy
We follow a Git Flow model to maintain code integrity across the project:
- **Main Branch**: Stable and release-ready code only.
- **Develop Branch**: Integration branch for features; periodically merged into `main`.
- **Feature Branches**: Each feature, fix, or enhancement has its own branch under `feature/`, e.g., `feature/enemy-ai`.

### Steps in Contributing

1. **Keep Branches Updated**  
   Regularly pull changes from `develop` to your feature branch to avoid conflicts and maintain consistency.
   
2. **Create a Feature Branch**  
   Before working on any feature, create a new branch under the feature namespace:
   ```bash
   git checkout -b feature/your-feature-name
  This keeps your work isolated and simplifies collaboration.

3. **Work on Your Assigned Tasks**  
   - Once the feature branch is created, start developing the assigned feature. Open a Pull Request (PR) as soon as you have a full or partial solution ready.

4. **Commit and PR Guidelines**  
   - Use [Conventional Commits](https://www.conventionalcommits.org/) format for commit messages (e.g., `feat: add player controls`).
   - Reference the issue directly in your PR description:
     ```markdown
     Closes #Issue_number
     ```

5. **Review and Merge**  
   - Wait for at least one team member to review your PR.
   - Reviewers should assess code quality, functionality, and alignment with the linked issue. Constructive feedback is encouraged to ensure high standards.
   - Only merge your PR into `develop` after receiving approval. Ensure to pull the latest changes from `develop` and resolve any conflicts before finalizing the merge.

6. **Periodic Code Reviews and Testing**  
   - Features merged into `develop` will be regularly tested and reviewed as part of preparations for merging into `main` for release.

## Project Management

This project uses GitHub Projects to organize tasks, track progress, and manage sprint cycles. The board contains the following columns:

- **Backlog**: Tasks and features not yet prioritized.
- **To Do**: Tasks slated for the current sprint.
- **In Progress**: Tasks actively being worked on.
- **Review**: Tasks completed and awaiting review.
- **Done**: Completed tasks.

### Sprint Cycles
Our team follows 1-2 week sprints:

- **Sprint Planning**: Define the sprint goal and allocate tasks from the backlog.
- **Daily Check-ins** (as needed): Ensure consistent progress and address blockers.
- **Sprint Review**: Evaluate completed work and gather feedback for improvement.

## Additional Notes

### Code Style and Quality
- **Coding Standards**: Follow agreed-upon C++ style guides to maintain readability and consistency.
- **Documentation**: Use in-code comments to explain complex logic and keep detailed documentation in the `/docs` folder.

### Testing
- **Automated Testing**: We aim to implement unit tests for critical game components, such as enemy behavior and core gameplay mechanics, in the future.
- **Playtesting**: Regular playtesting and feedback sessions will be conducted to refine gameplay elements and balance difficulty.

---

## Support and Contact

For questions, suggestions, or issues, please reach out via GitHub Issues or directly message **David Rusev** (Project Owner) on GitHub.
